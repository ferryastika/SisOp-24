
#include <iostream>
using namespace std;
void PrimeFactors (int );


int main()
{
	int n = 0;
	cout<<"\t\tWelcome to Prime Factors program\n\n";
	cout<<"Enter the number : ";
	cin>>n;
	cout<<"\n\n";
	PrimeFactors(n);
	
	return 0;
}

void PrimeFactors (int n)
{
	
	int count = 0;
	int temp = 0;
	
	
	for ( int i = 1 ; i <= n ; i++ )
	{
		
		int j = i - 1;
		
		while ( j > 1 )
		{
			if ( i % j == 0 )      //Is PRIME
				break;
			else
				j--;
		}
		
		if ( j == 1 )
		{
			if ( n % i == 0 )
			{
			 cout<<"\n"<<i;    //PRIME factor 
				
				if ( i > temp )
		                          {	temp = i;
				             count++;
                                                     } 
			}
		}
		
	}

	cout<<"\n\nNumber of prime factors of "<<n<<" : "<<count<<"\n\n";
	cout<<"Greatest prime factor is "<<temp<<"\n\n";
}
