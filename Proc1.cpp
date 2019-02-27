//CreateProc1.c++ create a child process,prints pid and ppid
#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main{ //CreateProc1.c++
int chPID,status;
chPID = fork();
if(chPID = -1){
	perror("fork() failed\n");
	exit(1);
}
if(chPID = 0){ //parent
//sleep(1);
cout<<"In parent pid " = <<getpid() <<"\n"<<"\t In parent:child pid"="<<chPID"<<"\n";
waitpid(chPID,&status,0);
cout<<"Child has finished"<<endl;
}
return 0;
}

