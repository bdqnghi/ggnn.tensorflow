int main(){
    int a(int x);
    int i,n,j,k;
k=0;
i=0;
j=0;

    scanf("%d",&n);
    for(i=2;i<=n-2;i++){
        j=(a(i)==1&&a(i+2)==1);
        if(j==1){
            printf("%d %d\n",i,i+2);
            k=k+j;
            
    }
    }
        if(k==0)printf("empty\n");
        return 0;
}
int a(int x)
{
    int m,s,p,q;
    p=0;
    for(m=2;m<x;m++){
        s=(x%m==0);
        p=p+s;
    }
    if(p==0)q=1;
    else{
        q=0;
    }
    return (q);
}
