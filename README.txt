README 
Caroline Hernandez 
caroline.hernandez@colorado.edu

/home/kernel/linux-hwe-4.14.0/arch/x86/kernel 
Sudo gedit add_newsyscall.c 
add_newsyscall.c holds a new system call 
	1. Now kernel.h header file makes us able to use the many constants and functions that are used in kernel 
hacking, including the printk function. 
2. Linkage.h defines macros that are used to keep the stack safe and ordered. 
3. Asmlinkage is a #define for some gcc magic that tells the compiler that the function should not expect to find any of its arguments in registers (a common optimization), but only on the CPU's stack. It is defined in the linkage.h header file 
The function printk is used to print out kernel messages.

/home/kernel/linux-hwe-4.14.0/arch/x86/kernel
sudo gedit Makefile 
	we have to tell the build system about our kernel call 

/home/kernel/linux-hwe-4.14.0/arch/x86/entry/entry/syscalls/syscall_64.tbl 	Look at the file and use the existing entries to add the new system call. Make sure it is added in the 64 bit system call section and remember the system call number as you will be using that later. 

/home/kernel/linux-hwe-4.14.0/include/linux sudo gedit syscalls.h
Now you will add the new system call in the system call header file. 
add the prototype of your system call at the end of the file before the endif. 

You can see the generated printk messages by running dmesg or by examining /var/log/syslog

Running the test file gcc test.c -o test 
./test 

compiling kernel
sudo make -j2 CC="ccache gcc"

