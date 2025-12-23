#include<stdio.h>
int main(){
        int shu[10];
        int a,b,c,d,e,f;
        int tmp,max;
        for(a=0;a<=9;a++){
                printf("请输入第%d个数",a+1);
                scanf("%d",&shu[a]);
        }
        for(b=9;b>=1;b--){
                for(c=0;c<=b;c++){
                        max=shu[b];
                        d=b;
                        if(max<shu[c]){
                                max=shu[c];
                                d = c;
                        }
                        tmp = shu[b];
                        shu[b] = max;
                        shu[d] = tmp;
                }
        }
        for(e=0;e<=9;e++){
                printf("%d\n",shu[e]);
        }
}
