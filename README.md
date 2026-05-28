# DOS-Attack-RAM

# RAM filling

This utility is designed so that the system allocates RAM with each loop iteration, which can crash a system in less than 15 seconds if placed in the Windows startup file.
`C:\Users\<USERNAME>\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Startup`

## ⚙️ Functioning

Le programme alloue de la mémoire de manière continue par blocs spécifiques à intervalles réguliers :
1. **Continuing allocation** : Uses `malloc` to reserve memory (`uint32_t`).
2. **Sleep** :It pauses between each allocation to take it easy, but the Sleep function can be removed.
3. **Running in the background** : The process detaches itself from the user interface to run invisibly.

> **Note** : This program will cause a memory leak by consuming all the RAM until the system has nothing left to give.


## 🛠️ Compilation Instructions

### 1. On Windows
To compile the program without displaying a console during its execution :

#### With GCC (MinGW) :
Use the `-mwindows` option to prevent the command prompt from opening :

`g++ -O2 main.cpp -o RAMStressTest.exe -mwindows`

### 2. On Linux

#### With GCC (MinGW) : 

`g++ -O2 <filename>.cpp -o <filename>`

## ⚠️ I am not responsible for any malicious activity you may cause as a result of using these scripts !!!
