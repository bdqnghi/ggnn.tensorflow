int main(){
    int num,n[100],i,j;
    double a[100][1000],s[100];
    double f(double x[],int k);
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d",&n[i]);
        for(j=0;j<n[i];j++)
            scanf("%lf",&a[i][j]);
    }
    for(i=0;i<num;i++){
        printf("%.5f\n",f(a[i],n[i]));
    }
    return 0;
}
double f(double x[],int k){
    int i;
    double a,sum(double y[],int l),s=0;
    a=sum(x,k)/k;
    for(i=0;i<k;i++){
        s+=pow(x[i]-a,2);
    }
    s=sqrt(s/k);
    return(s);
}
double sum(double y[],int l){
    int i;
    double c=0;
    for(i=0;i<l;i++)
        c+=y[i];
    return(c);
}