	       /* PROGRAM FOR CHANGE NUMBER INTO WORDS */

#include<stdio.h>
#include<conio.h>
void display(int );      //PROTOTYPE
void digit3(int ,int *);
int main()
{
  int a[10],num,i=0,j; //DECLARATION OF VARIABLE
  long number,copy;

do{
   clrscr();    //CLEAR DOS PROMPT
   printf("\n Enter a Number to Change in Word "); //MESSAGE
   scanf("%ld",&number);		  //TAKEN NUMBER FROM USER
     copy=number;
     for(i=0;copy>0;i++)
     {
       a[i]=copy%10;
       copy /=10;
     }
     i--;
   if(number<0 || number>100000)  //check range of number
     printf("\n Number Not Allowed");
  else
  if(number==0)
   printf(" ZERO ");
  else if(number<100)
	display(number);
  else
       if(number<1000)
	{
	    digit3(i,a);
	 }
  else
       if(number<10000)
       {
	     display(a[i]);
	      printf("Thousand");
	      i--;
	      digit3(i,a);
	}
  else
       if(number<100000)
       {
	 num=a[i]*10+a[i-1];
	     display(num);
	     printf("Thousand");
	     i=i-2;
	     digit3(i,a);
       }
printf(" \n Do U Want More Number to Convert Press 1 : ");
  scanf("%d",&j);
  i=0;
}while(j==1); //rotate the program
 getch(); //hold screen
 return 0;
}
void digit3(int i,int *pa) //display for 3 digit number
 {
   int num;
    if(pa[i]!=0)
     {
       display(pa[i]);
       printf("Hundred");
       i--;
      }
     else
      i--;
   num=pa[i]*10+pa[i-1];
   display(num);
   }
void display(int num)  //function definition for display
  {
     char lty[19][10]={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Forteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
     char aty[8][10]={"Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninty"};
     int  d;
	if(num>19)
	{
	 d=num/10;
	 printf(" %s ",aty[d-2]);
	 if((num%10)!=0)
	 {
	    d=num%10;
	    printf(" %s ",lty[d-1]); }
	 }
     else
	printf(" %s ",lty[num-1]);
  }

			/* Program End*/