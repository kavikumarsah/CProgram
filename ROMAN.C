       /* Convert Decimal Number To Roman Number Upto 9999 */
#include<stdio.h>
#include<conio.h>
void main() //start main function
{
 /*Declaration & Iniliasation of Variable for further use*/
   char a[10][5]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
   char b[10][5]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
   char c[10][5]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
   char d[10][10]={"","M","MM","MMM","MMMM","MMMMM","MMMMMM","MMMMMMM","MMMMMMMM","MMMMMMMMM"};
   int number;
   clrscr();   //clear screen
   printf("\n Enter The Decimal Number To Convert To Roman:");//Message
   scanf("%d",&number); //input from user at run time
   if((number<0)||(number>9999)) //check range of number
    printf("\n Program Unable To Convert Your Number");
   else
    if(number==0)                  //for display zero
     printf("nulla");
   else
    if(number<10)                  // for display 1 to 9
     printf("%s",a[number]);
   else
    if(number<100)                // for display 10 to 99
     {
	printf(" %s",b[number/10]);
	printf("%s",a[number%10]);
     }
   else
     if(number<1000)               // for display 100 to 999
      {
       printf("%s",c[number/100]);
       printf("%s",b[(number%100)/10]);
       printf("%s",a[((number%100)%10)]);
      }
   else
     {
      printf("%s",d[number/1000]);
      printf("%s",c[(number%1000)/100]);
      printf("%s",b[((number%1000)%100)/10]);
      printf("%s",a[((number%1000)%100)%10]);
     }
 getch(); //hold screen
} //main() closed

   /* End Of Program : coded By KAVI KUMAR SAH */