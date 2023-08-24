#include "types.h"
#include "user.h"

#include <stdio.h>

int main(void){
int pid=fork();
   if (pid>0){
   printf("parent: child=%d\n",pid);
   pid=wait((int *)0);
   //printf("parent: child=%d\n",pid);
   printf("child %d is done\n",pid);
   }
   else if(pid==0){
   printf("child:exiting\n"); 
   exit(0);
   }
   else{
   printf("fork error\n");
   }
   return 0;
   }
