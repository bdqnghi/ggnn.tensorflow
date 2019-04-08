int main(){
    int n,i;
    int a[10000];
    int k=0,l=0,m=0,q=0;
    double s;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]<=18){
            k+=1;
        }
        if(a[i]>=19&&a[i]<=35){
            l+=1;
        }
        if(a[i]>=36&&a[i]<=60){
            m+=1;
        }
        if(a[i]>60){
            q+=1;
        }
    }
    printf("1-18: %.2lf%%\n",(double)100*k/n);
    printf("19-35: %.2lf%%\n",(double)100*l/n);
    printf("36-60: %.2lf%%\n",(double)100*m/n);
    printf("Over60: %.2lf%%\n",(double)100*q/n);
    return 0;
}
