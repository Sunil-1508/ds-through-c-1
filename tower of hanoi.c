
#include <stdio.h>
void towers(int, char, char, char);
int main()
{
int num;
printf("Enter the number of disks : ");
scanf("%d", &num);
printf("The sequence of moves involved in the Tower of Hanoi are :\n");
towers(num, 'S', 'A', 'D');
return 0;
}
void towers(int num, char s, char a, char d)
{
if (num == 1)
{
printf("\n Move disk 1 from peg %c to peg %c",s,d);
return;
}
towers(num - 1,s,d,a);
printf("\n Move disk %d from peg %c to peg %c",num,s,d);
towers(num - 1,a,s,d);
}
