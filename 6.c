#include<stdio.h>
int main(){
        char A[5][6] = {
       {'S','D','U','Y','E','S'},
       {'C','H','I','N','A','!'},
       {'A','F','T','E','R','X'},
       {'h','e','r','o','a','b'},
       {'C','y','y','D','S','!'}
    };
        int he[5]={0,0,0,0,0};
        //printf("%d",A[0][0]);
        int a,b,c,d,e,f,g,h;
        int max,tmp;
        char tmp1 , max1;
        //对数组单行排序，并计算每行的sacii码的和
        for(a=0;a<=4;a++){
                for(b=5;b>=0;b--){
                        for(c=0;c<=b;c++){
                        max=A[a][b];
                        d=b;
                        if(max<A[a][c]){
                                max=A[a][c];
                                d = c;
                        }
                        tmp = A[a][b];
                        A[a][b] = max;
                        A[a][d] = tmp;
                        }
                }
                for(e=0;e<=5;e++){
                        he[a]=he[a]+A[a][e];
                }
                //printf("%d\n",he[a]);
        }


//我服了我不想再正常写一个排序了:(
for(d=0;d<=10;d++){
        for(a=0;a<=3;a++){
                if(he[a]>he[a+1]){
                        for(b=0;b<=5;b++){
tmp1 = A[a][b];
                                A[a][b] = A[a+1][b];
                                A[a+1][b]=tmp1;
                        }
                }
        }
}
//for(h=0;h<=4;h++){
//      printf("%d\n",he[h]);
//}


//输出排序后的数组
        for(f=0;f<=4;f++){
                for(g=0;g<=5;g++){
                printf("%c",A[f][g]);
                }
                printf("\n");
        }
        return 0;
}
