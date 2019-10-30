#include<stdio.h>
#include<conio.h>
static int s=1234,l,m,i=1,mobile,t,p,b;
static float j=2.5,h,r,due,units;
static char name[10],street[50],house[10],z[15];
char u[6],v[6]="shyam123",ch;
struct customer_details
{
	char name[10];
	char street[50];
	char house[10];
	unsigned long int mobile[10];	
};
struct customer_details c1;
void add_customer()
{
	
	            printf("                                add customer details                          ");
            	printf("\ntell me your name:");
			    scanf("%s",&c1.name);
	            printf("\ntell me ur street:");
			    scanf("%s",&c1.street);
			    printf("\ntell me your house number:");
			    scanf("%s",&c1.house);
			    printf("\ntell me your mobile number:");
			    scanf("%lu",&c1.mobile);
			    printf("\n show me the units you have used:");
			    scanf("%f",&units);
			    h=(units*j);
			    printf("\nthe amount you have to pay is:%f",h);
			    printf("\nhow much money you want to pay:");
			    scanf("%f",&r);
			    due=h-r;
			    printf("\nyour due is:%f",due);
			    printf("\nyour slip id number is:%d",s);
			    l=s;
			    s++;
			    printf("\n********************************THANKYOU*************************************");
}


main()
{
    printf("                                 POWER BILL CALCULATOR                    \n");
	printf("enter user name:");
	scanf("%s",&z);
	printf("\npassword:");
	for(b=0;b<6;b++)
	{
	  ch=getch();
	  u[b]=ch;
	  printf("*");
   }
	p=strcmp(u,v);
	if(p==0)
	{
       while(i!=0)
       {
		printf("\n1.FOR PAYMENT\n2.PAYMENT DETAILS\n3.EXIT:");
		scanf("%d",&t);
		switch(t)
		{
			case 1:
			{
			   add_customer();
			   FILE *file=fopen("f:\\customer.txt","a");
            	    if(file==NULL)
            	    {
            	    	printf("error saving customer data ");
            	    }
            	    fprintf(file,"\t details:\tnameis:%s\tur street is:%s\tyour house number:%s\tyour bill is:%f\tdue:%f\n",c1.name,c1.street,c1.house,h,due);
                    fclose(file);  
			   break;	
			}   	
            case 2:
           	{
           		printf("                          open  details of the customer     \n  ");
            	printf("show me your id slip no:");
            	scanf("%d",&m);
            		if(l==m)
            		{
            		 printf("\ndetails\nnameis:%s\nur street is:%s\nyour house number:%s\nyour bill is :%f\ndue:%f",c1.name,c1.street,c1.house,h,due);
            	    }
            	     FILE *file=fopen("f:\\customer.txt","a");
            	    if(file==NULL)
            	    {
            	    	printf("error saving customer data ");
            	    }
            	    fprintf(file,"\t details:\tnameis:%s\tur street is:%s\tyour house number:%s\tyour bill is:%f\tdue:%f\n",c1.name,c1.street,c1.house,h,due);
                    fclose(file);  
			   break;	
            	    printf("\n***************************thankyou*****************************");
            	    
				break;
    
           	}
           	case 3:
           		{
           		
           		printf("     **************EXIT ***********   ");
           		i=0;
           		break;
           	}
           	
       }
	        
       }
       }
  
          getch();
      }
	          

