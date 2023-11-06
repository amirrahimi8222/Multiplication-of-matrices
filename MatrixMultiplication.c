#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int A[a][b],B[b][c],Z[a][c];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&B[i][j]);
        }
    }
    for (int s=0;s<a;s++) {
        for (int i = 0; i < c; i++) {int sum =0;
            for (int j = 0; j < b; j++) {
                int mul = A[s][j]*B[j][i];
                sum = sum + mul;
            }
            Z[s][i]=sum;
        }
    }
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j <c ; ++j) {
            printf("%d ",Z[i][j]);
        }
        printf("\n");

    }





        }






