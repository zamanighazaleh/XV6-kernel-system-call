# XV6-kernel-system-call
How to Add a system call to xv6 kernel
In this project, we add a system call to XV6 kernel that prints a list of running processes (like ps command in linux). Then we write a program that makes five children and waits until all children are finished.
# Install qemu
```
sudo apt-get install qemu-kvm
sudo apt-get install git git clone https://github.com/mit-pdos/xv6-public.git
cd xv6-public 
make qemu-nox
```
Exit qemu and go to your shell:
```
C-a x
```
# How to add a new system call?
1-Add the system call number (22) to syscall.h file
