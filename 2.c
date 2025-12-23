#include<stdio.h>
int main(){
        int shu[10];
        int a,b,c,d,f;
        for(a=0;a<=9;a++){
                printf("输入第%d个范围在0-9之间的整数",a+1);
                scanf("%d",&shu[a]);
        }
        for(b=1;b<=10;b++){
                int e=0;
                for(c=0;c<=9;c++){
                        d=(shu[c]+1)/b;
                        f=(shu[c]+1)%b;
                        if(d==1&&f==0){
                                e++;
                        }
                }
                printf("数字%d有%d个\n",b-1,e);
        }
        return 0;
}
