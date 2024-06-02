#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct date{
    int d,m,y;
};
struct item{
    char nam[25];
    int quan;
    float rate;
    float total;
};
struct data{
    char name[20];
    char mob[13];
    char add[30];
    struct date dob;
    struct item k[15];
};
void generate()
{
    printf("Generating your bill !!!!\n\n\n");
    int i=0,j,n;
    float total=0;
    struct data cus;
    printf("Enter customer's name:");
    scanf(" %[^\n]",cus.name);
    printf("Enter customer's mobile no:");
    scanf(" %[^\n]",cus.mob);
    printf("Enter customer's address:");
    scanf(" %[^\n]",cus.add);
    printf("Enter customer's Date of birth (DD MM YY):");
    scanf("%d %d %d",&cus.dob.d,&cus.dob.m,&cus.dob.y);
    do{
        printf("Now enter the item details\n\n\n");
        printf("Enter your item name:");
        scanf(" %[^\n]",cus.k[i].nam);
        printf("Enter Quantity:");
        scanf("%d",&cus.k[i].quan);
        printf("Enter price:");
        scanf("%f",&cus.k[i].rate);
        cus.k[i].total=cus.k[i].rate*cus.k[i].quan;
        total=total+cus.k[i].total;
        printf("Press 0 if your items are over otherwise press any other no:");
        scanf("%d",&n);
        i++;
        }while(n!=0);
    printf("Name:%s\n",cus.name);
    printf("Mobile No:%s\n",cus.mob);
    printf("Address:%s\n",cus.add);
    printf("Date Of Birth:%d-%d-%d\n",cus.dob.d,cus.dob.m,cus.dob.y);
        for(j=0;j<i;j++)
        {
           printf("%s(NAME)----%d(QUANTITY)--------%.2f(RATE)-------%.2f(Total)---\n",cus.k[j].nam,cus.k[j].quan,cus.k[j].rate, cus.k[j].total);
        }
        printf("Your Total is    :  Rs%.2f",total);
}
void change()
{
    printf("Changing your initials !!!!");
}
void main()
{
    int a;
    printf("Press 1 to generate your bill\n");
    printf("Press 2 to change the initials\n");
    printf("Press 0 to exit\n");
    scanf("%d",&a);
    switch(a){
        case 1:
        generate();
        break;
        case 2:
        change();
        break;
        case 0:
        printf("Thank for your time !!!");
        break;
    }
}
