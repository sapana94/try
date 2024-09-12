#include<stdio.h>
void main(){
    int a[10],b[10],c[10],i,j,k;
    printf("enter the elements of set b \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the eleents of set b \n");
    for(j=0;j<5;j++)
    {
        scanf("%d",&b[j]);
    }
    printf("cartisian product \n");
    printf("{");
    for(i=0;i<5;i++){
        for(j=0;i<5;j++)
        {
            printf("(%d,%d)",a[i],b[j]);
            printf(",");
        }
    }
    printf("}");
}