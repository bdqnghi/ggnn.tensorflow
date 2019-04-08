int a[100000][2],b[100000]={0};
int c=0,f=0,e=0,i=0,m=0,t=0,n=0;
int main(){

    scanf("%d",&e);
    for(i=0;i<e;i++){
            scanf("%d %d",&a[i][0],&a[i][1]);
    }

    for(i=0;i<e;i++){
         for(m=a[i][0];m<a[i][1];m++){
                   b[2*m]=1;

                   b[2*m+1]=1;

         }
         b[2*m]=1;

    }
    for(i=1;i<=100000;i++){
         if(b[i]==1)t=i;
    }
    for(i=100000;i>0;i--){
         if(b[i]==1){
            n=i;
         }
    }
    f=0;

    for(i=n;i<=t;i++){
         if(b[i]==0) f=1;

    }
    if(f==1){printf("no");}
    else{printf("%d %d",n/2,t/2);}

return 0;
}
