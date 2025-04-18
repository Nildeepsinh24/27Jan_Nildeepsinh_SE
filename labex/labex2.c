#include<stdio.h>
#define pi 3.14 // Constant using #define
void main()
{
    float circle,tringle,rectangle,squar;//folat variable
    int a,r,b,h,l,w,c;//integer veriable
    printf(" enter 1 for area of circle \n enter 2 for area of square \n enter 3 for area of rectangle \n enter 1 for area of tringle");
    printf("\n enter your choice:");
    scanf(" %d",&c);
    switch(c)//switch function
    {
        case 1:
            printf("enter value of radius :");
            scanf("%d",&r);
            circle=pi*r*r;
            printf("area of circle is : %f",circle);
        break;

        case 2:
            printf("enter value of radius :");
            scanf("%d",&r);
            squar=r*r;
            printf("area of square is : %f",squar);
         break;

        case 3:
            printf("enter value of breath and hight: %d %d");
            scanf("%d %d",&l,&h);
            tringle=1/2*l*h;
            printf("area of tringle is :%f",tringle);
         break;

        case 4:
            printf("enter value of length and width: %d %d");
            scanf("%d %d",&l,&w);
            rectangle=l*w;
            printf("area of rectangle is  : %f ",rectangle);
        break;

        default:
        printf("invalid choice");
        break;
    }
}
