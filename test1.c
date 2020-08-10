#include "types.h"
#include "stat.h"
#include "user.h"

int fork_test(int n)
{ 
   int x = n * 2;
   return x;
}
int main(int argc, char *argv[])
{
   int pid = 0, num = 11;
   
   printf(1, "This test is to test the correctness of forking new process \n");
   printf(1, "with new memory layout by simply multiplying a number by 2 in chlid \n");
   
   pid = fork();
   if(pid == 0){
       printf(1, "\n %d * 2 = %d \n", num, fork_test(num));
       printf(1, "Chlid proc ends \n");
       exit();
   }
   wait();
   printf(1, "Test ends successfully! \n \n");
   
   exit();
   
   return 1;
}
