#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter the number of coloum and row of matrices :");
    scanf("%d%d",&a,&b);
    int A[a][b],B[a][b],sum[a][b],sub[a][b],mul[a][b];
    printf("\nenter the element of matix A");
    for(c=0;c<a;c++){
        for(d=0;d<b;d++){
            scanf("%d",&A[a][b]);
        }
    }
    printf("\nEnter the element of matrix b");
     for(c=0;c<a;c++){
        for(d=0;d<b;d++){
            scanf("%d",&B[a][b]);
        }
    }
    for(c=0;c<a;c++){
        for(d=0;d<b;d++){
                sum[a][b]=A[a][b] + B[a][b];
                sub[a][b]=A[a][b] -B[a][b];
        }
    }
    for(c=0;c<a;c++){
        for(d=0;d<b;d++){
                mul[a][b]=0;
        for(e=0;e<a;e++){
            mul[a][b] += A[a][b]*B[a][b];
        }
        }
        }
     printf("\naddtion of matrices :");
     for(c=0;c<a;c++){
        for(d=0;d<b;d++){
                printf("\n%d",sum[a][b]);
        }
     }
     printf("\nsubstraction of matrices :");
     for(c=0;c<a;c++){
        for(d=0;d<b;d++){
                printf("\n%d",sub[a][b]);
        }
     }
     printf("\nmultiplication of matrices :");
     for(c=0;c<a;c++){
        for(d=0;d<b;d++){
                printf("\n%d",mul[a][b]);
        }
     }
}
