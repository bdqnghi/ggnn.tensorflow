int main(){
    int n[6],f(int x),i,j,nf[6];
    for(i=0;i<6;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<6;i++){
        if(n[i]==0){
            nf[i]=0;
        }
        else if(n[i]<0){
            nf[i]=-1*f(abs(n[i]));
        }
        else{
            nf[i]=f(n[i]);
        }
    }
    for(i=0;i<6;i++){
        printf("%d\n",nf[i]);
    }
    return 0;
}
int f(int x){
    int i,a[20],b,y,j;
    b=10;
    for(i=0;i<20;i++){
        a[i]=(x%b)/(b/10);
        x=x-(b/10)*a[i];
        if(x==0){
            break;
        }
        b=b*10;
    }
    y=0;
    b=1;
    for(j=0;j<=i;j++){
        y=y+a[i-j]*b;
        b=b*10;
    }
    return(y);
}
