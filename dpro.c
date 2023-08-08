#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]){

	int pid[5];
	int x, z, i;
	int inChild = 0;

	
	printf(1, "dpro is running (pid: %d) to make 5 childs\n", getpid());

        for(i = 0; i < 5; i++){
                pid[i] = fork();
                if(pid[i] == 0){
                	inChild = 1;
                	break;
                }
        }

        while(inChild == 1){
        	sleep(60*(i+1));
		printf(1, "Child (pid: %d) created\n", getpid());
		for(z = 0; z < 400000000000; z+=1)
			x = x + 3.14*89.64; //Useless calculation to consume CPU Time
		exit();
		inChild = -1;
        }
        
        while(inChild == 0){
        	sleep(3);

        	for(int i = 0; i < 5; i++){
        		printf(1, "Parent (pid: %d) creating child %d (pid: %d)\n", getpid(), i+1,  pid[i]);
        	}
        	 wait();
        }
}
