// C code to print 1 2 3 infinitely using pthread 
#include <stdio.h> 
#include <pthread.h> 

// Declaration of thread condition variables 
pthread_cond_t cond1 = 
			PTHREAD_COND_INITIALIZER; 
pthread_cond_t cond2 = 
			PTHREAD_COND_INITIALIZER; 
pthread_cond_t cond3 = 
			PTHREAD_COND_INITIALIZER; 

// mutex which we are going to 
// use avoid race condition. 
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER; 

// done is a global variable which decides 
// which waiting thread should be scheduled 
int done = 1; 

// Thread function 
void *foo(void *n) 
{ 
		while(1) { 
				
				// acquire a lock 
				pthread_mutex_lock(&lock); 
				
				if (done != (int)*(int*)n) { 
						
						// value of done and n is not equal, 
						// hold wait lock on condition variable 
						if ((int)*(int*)n == 1) { 
								pthread_cond_wait(&cond1, &lock); 
						} else if ((int)*(int*)n == 2) { 
								pthread_cond_wait(&cond2, &lock); 
						} 
						else { 
								pthread_cond_wait(&cond3, &lock); 
						} 

				} 
				// done is equal to n, then print n 
				printf("%d ", *(int*)n); 

				// Now time to schedule next thread accordingly 
				// using pthread_cond_signal() 
				if (done == 3) { 
						done = 1; 
						pthread_cond_signal(&cond1); 
				} 
				else if(done == 1) { 
						done = 2; 
						pthread_cond_signal(&cond2); 
				} else if (done == 2) { 
						done = 3; 
						pthread_cond_signal(&cond3); 
				} 
				
				// Finally release mutex 
				pthread_mutex_unlock(&lock); 
		} 

		return NULL; 
} 

// Driver code 
int main() 
{ 
		pthread_t tid1, tid2, tid3; 
		int n1 = 1, n2 = 2, n3 = 3; 
		
		// Create 3 threads 
		pthread_create(&tid1, NULL, foo, (void *)&n1); 
		pthread_create(&tid2, NULL, foo, (void *)&n2); 
		pthread_create(&tid3, NULL, foo, (void *)&n3); 
		
		// infinite loop to avoid exit of a program/process 
		while(1); 
		
		return 0; 
} 
