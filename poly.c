#include<stdlib.h>
#define MAX 100
typedef struct
{
float coeff;
int expon;  
}POLYNOMIAL;
POLYNOMIAL p[MAX];
//void poly_add(POLYNOMIAL *p,int startA,int endA,int startB,int endB,int *startC,int *endC);
int main()
{
        int i,n,startA,startB,endA,endB,j;

        printf("Enter the number of terms in the 1st expression\n");
        scanf("%d",&endA);
        startA=0;
        printf("Enter the %d terms\n",endA);
        for(i=0;i<endA;i++)  
        {
        printf("Enter the %d co-eff value:",i+1);
        scanf("%f",&p[i].coeff);
        printf("\nEnter the %d exponent value:",i+1);
        scanf("%d",&p[i].expon);
        printf("\n");
        }                                                                                                                                   
         printf("Enter the number of terms in the 2nd expression\n");
         scanf("%d",&endB);
        startB=endA;
        printf("Enter the %d terms\n",endB);
        for(i=startB,j=0;i<endB+endA;i++,j++)
        {
        printf("Enter the %d co-eff value:",j+1);
        scanf("%f",&p[i].coeff);
        printf("\nEnter the %d expon value:",j+1);
        scanf("%d",&p[i].expon);
        printf("\n");
        }

        printf("\nThe exprssion 1 is:");
        for(i=0;i<endA;i++)
        printf("%f X^%d + ",p[i].coeff,p[i].expon);
        printf("\n");

        printf("The exprssion 2 is:");
        for(i=startB;i<endB+endA;i++)
        printf("%f X^%d + ",p[i].coeff,p[i].expon);
        printf("\n");

return 0;

}
