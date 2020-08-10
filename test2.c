#include "types.h"
#include "stat.h"
#include "user.h"

 uint recursive(uint n) {
   if (n == 0 || n == 1) {
     return n;
   }

   if (n == 40 || n == 60 || n == 80 || n == 100 || n == 120) {
       printf(1, "%d\n", n);
   }

   return recursive(n - 1) + recursive(n - 2);
 } 

 int main(int argc, char const *argv[]) {

    printf(1, "\n This test is to detect the page fault and increase the stack size by one page \n \n");
    
    printf(1, "recursive(5) = %d\n", recursive(5));
    printf(1, "recursive(10) = %d\n", recursive(10));
    printf(1, "recursive(15) = %d\n", recursive(15));
    printf(1, "recursive(20) = %d\n", recursive(20));
    printf(1, "recursive(25) = %d\n", recursive(25));
    printf(1, "recursive(30) = %d\n", recursive(30));
    printf(1, "recursive(35) = %d\n", recursive(35));
    printf(1, "recursive(40) = %d\n", recursive(40));
    printf(1, "recursive(90) = %d\n", recursive(90));

   return 0;
 }
