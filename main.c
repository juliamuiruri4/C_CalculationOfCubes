#include <stdio.h>
//program to display the cube of the number up to a given integer

int main()
{
    int integer;
    printf("Key in your integer of choice\n");

    scanf("%d",&integer);
   int count=0;
   for(count=0;count<=integer;count++){
        int cube=count*count*count;

    printf("Number is : %d and cube of the number %d is : %d\n" ,count,count,cube);
   }
    return 0;
}
