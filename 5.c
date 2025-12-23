#include<stdio.h>
#include <stdint.h> 
 int hanshu(int *x, int i, int j, int m, int n, int C){
                int pianyi1 = (m-i)*C + (n - j );
                uintptr_t pianyi2 = (uintptr_t)pianyi1 * sizeof(int);
                int *dizhi = (int*)((uintptr_t)x + pianyi2);
                return *dizhi;
        }
int main(){
        int A[2][3] = {{2,3,4},{7,8,9}};
        int a = hanshu(&A[0][0],0,0,1,2,3);
        printf("%d\n",a);
        int b = hanshu(&A[0][1],0,1,1,2,3);
        printf("%d\n",b);
        return 0;
}
