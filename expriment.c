
/*lower to Upercase convertion*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    while(1)
    {
    printf("\nwhat think did you like to do");
    printf("\n1. for print \n2. for about i fn\n3. for get put");
    printf("\n4. for read and write a line of text");
    printf("\n5. for minimum fild width specification");
    printf("\n00. for exit");
    int a;
    printf("\nenter your choice: ");
    scanf("%d",&a);
    switch (a)
    {
        case 1:
        print_fn();
        break;

        case 2:
        about_ifn();
        break;

        case 3:
        about_get_put();
        break;

        case 4:
        read_write();
        break;

        case 5:
        mini_spa();
        break;


        case 00:
        exit(1);
        break;
    
    default:
    printf("\ninvalid option plz try again");
        break;
    }
    }

    return 0;
}


 print_fn()
 {
    printf("\nmy exprimenntal program");
    printf("\vi live in bangladesh ?");
    printf("\nhello");

 }


 about_ifn()
 {
    int i;
    i=50;
    printf("\n%d",i);
    printf("\n%d",i++);
    printf("\n%d",++i);

   return 0;
   }


 about_get_put()
 {
    char ch;
    printf("\nenter any character value: ");
    ch=getchar();
    printf("the equivalent uppercase character is");
    putchar(toupper (ch));
    return 0;
 }


 read_write()
 {
     char line[80];
     scanf("%[^\n]",line);
     printf("%s",line);
     return 0;
 }


 mini_spa()
 {
     int i=12345;
     
    float x=345.678;
    
    
     printf("%d %d %d\n\n", i , i , i );
     printf("%f %f %f\n\n", x , x , x );
     printf("%e %e %e\n\n", x , x , x );
    
     printf("%3d %5d %8d\n\n", i , i , i );
     printf("%3f %10f %13f\n\n", x , x , x );
     printf("%3e %13e %16e\n\n", x , x , x );
     
     return 0;
 } 