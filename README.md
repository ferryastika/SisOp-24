# SisOp-24
Repository untuk mata kuliah Sistem Operasi D3 TI LA
|No  | Topics |
|----------|----------|
| 1  | Introduction: Operating system Meaning, Supervisor & User mode, operating system operations & Functions, Types of OS: Single-processor system, multiprogramming, Multiprocessing, Multitasking, Parallel, Distributed, RTOS, etc. |
| 2  | Operating System Structure: OS Services, System Calls, System Programs, OS Structures, layered structure Virtual machines,       |
| 3  |   Processes: Process Concept, PCB, Operation on Processes, Cooperating Processes, Interprocess Communication, Process Communication in Client-Server Environment.   |
| 4  |  Threads: Concept of Thread, Kernel level & User level threads, Multithreading, Thread Libraries, Threading Issues     |
| 5|    Scheduling: scheduling criteria, scheduling algorithms, Type of Scheduling: Long term, Short term & Medium term scheduling, multi-processor scheduling algorithm, thread scheduling,   |
| 6  |  Process Synchronization: Critical Section problem, semaphores, monitors, Deadlock characterization, Handling of deadlocks -  deadlock prevention, avoidance, detection, recovery from deadlock.   |
| 7  |  Memory Management: Logical & Physical Address space, Swapping, Contiguous memory allocation, paging, segmentation, Virtual memory, demand paging, Page replacement & Page Allocation algorithms, thrashing, Performance issues    |
| 8  |  File Management: File concepts, access methods, directory structure, file system mounting, file sharing, protection, Allocation methods, Free space Mgt., Directory Implementation.     |
| 9  |  I/O & Secondary Storage Structure: I/O H/W, Application I/O Interface, Kernel I/O subsystem, Disk Scheduling, disk management, swap-space management, RAID structure.    |
| 10  | System Protection: Goals of protection, Access matrix and its implementation, Access control and revocation of access rights, capability-based systems      |
| 11|  System Security: Security problems, program threats, system and network threats, cryptography as a security tool, user authentication, implementing security defenses, and firewalling to protect systems and networks. Case studies Windows OS, Linux or any other OS|
| 12| Virtualization |
| 13 | Containerization|

Catatan :
1) Untuk semua referensi akan diunggah di  sistem ETHOL.
2) Semua tugas dikumpulkan melaluui repository github masing-masing. Aturan penamaan repository : "SysOP24-NRP"
3) Deadline pengumpulan tugas hari Senin minggu berikutnya jam 13:00 WIB (commmit terakhir di github masing-masing)


## Tugas 1
Referensi : Topik 1 Sejarah OS
1. Apa hubungan antara perangkat lunak aplikasi dan sistem operasi?
2. Apa yang dimaksud dengan sistem operasi? Apakah itu perangkat keras atau perangkat lunak?
3. Sebutkan fungsi utama suatu sistem operasi!
4. Jelaskan secara singkat evolusi sistem operasi!
5. Apa saja elemen kunci dari sistem operasi?
6. Apa yang Anda maksud dengan istilah generasi komputer?
7. Siapa yang memberikan gambaran tentang program tersimpan dan pada tahun berapa? Siapa yang memberikan struktur dasar komputer?
8. Sebutkan kekurangan komputer generasi pertama dibandingkan komputer generasi kedua!
9. Berdasarkan sistem manakah komputer generasi kedua? Apa saja penemuan baru pada komputer generasi kedua?
10. Deskripsikan apa itu IC / sirkuit terpadu!
11. Apa inovasi terpenting komputer generasi ketiga?
12. Berikan gambaran singkat tentang komputer generasi keempat. Bagaimana teknologinya lebih baik dari generasi sebelumnya?
13. Berapakah masa komputer generasi kelima dan bandingkan inovasi dari generasi sebelumnya?
14. Apa perbedaan antara perangkat keras dan perangkat lunak?
15. Apa perbedaan antara perangkat lunak sistem dan perangkat lunak aplikasi?

## Tugas 2
Referensi : Topik 2 Cara Kerja dan Fungsi Sistem Operasi.

**TUGAS BACA UNTUK PERSIAPAN PERTEMUAN MINGGU DEPAN !**
## Tugas 3
1. Buatlah presentasi langkah demi langkah tentang siklus CPU (fetch,decode,execute) utk mengeksekusi sebuah program. Jelaskan juga peran dari Bahasa pemrograman dan compiler, begitu juga dengan peran dari Sistem Operaso. Gunakan referensi : [Video referensi 1](https://www.youtube.com/watch?v=Z5JC9Ve1sfI) dan [Video referensi 2](https://www.youtube.com/watch?v=jFDMZpkUWCw)
2. Baca dan pahami rangkuman materi OS: [Materi Intro to OS-01](https://github.com/ferryastika/OS-01)
3. Jalankan VM Debian anda, lalu lakukan clone https://github.com/ferryastika/flops-iops. Compile dan eksekusi sesuai petunjuk. Sesuiakan jumlah thread dengan jumlah CPU yang ada di VM Debianmu. Catat hasilnya dan jelaskan arti dari hasil ekskusi. Lakukan sebanyak 5 kali. Bandingkan hasilnya anatar temanmu. Buat Plot perbandinnga hasil untuk masing-masing PC di tiap kelompokmu. Analisa hasil percobaan tadi  dan beri kesimpulan tentang IOPS dan FLOPS.
4. Apabila Debian VM mu masih belum terdapat packeage gcc, make dan git, lakukan instalasi dan catat setiap langkahnya!

## Tugas 4
Belajar tentang shell programming dengan konsep input, process dan output. Kerjakan praktikum di link ini : 
