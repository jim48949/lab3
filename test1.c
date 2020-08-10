#include "types.h"
#include "stat.h"
#include "user.h"

int fork_test(int n)
{ 
   int x = n + 1;
   return x;
}
int main(int argc, char *argv[])
{
   int pid=0;
   
   printf(1, "This test is to test the correctness of forking new process \n with new memory layout \n");
   
   pid=fork();
   if(pid==0){
       printf(1, "\n %d + 1 = %d \n", 1, fork_test(1));
       exit();
   }
   wait();
   exit();
}
