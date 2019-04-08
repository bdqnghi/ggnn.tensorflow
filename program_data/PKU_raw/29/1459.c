
int main(){
    int i,n,m,j;
    int a[100];
    scanf("%d",&m);
    for(j=0;j<m;j++){
        scanf("%d",&a[j]);
    }
    float up[100],down[100],sum=0;  //up?????down????
    for(j=0;j<m;j++){
        if(a[j]==1){   //???????????n?1???
           sum=2;
           printf("%.3f\n",sum);
        }
        else if(a[j]>=2){
                up[0]=2,up[1]=3;  //?n????2?????up down???????
                down[0]=1,down[1]=2;
                for(i=2;i<a[j];i++){   //???up down????
                    up[i]=up[i-1]+up[i-2];
                    down[i]=down[i-1]+down[i-2];
                }

               for(i=0;i<a[j];i++){
               sum+=up[i]/down[i];  //??

               }
               printf("%.3f\n",sum);
       }
       sum=0;
    }
    return 0;
}

