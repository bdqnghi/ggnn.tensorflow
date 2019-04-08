int main()
{
    int n,i;
    double x;
    int a[100],b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
    }
    x=(double)(b[0])/(double)(a[0]);
    for(i=1;i<n;i++){
        if((double)(b[i])/(double)(a[i])-x>0.05){
            printf("better");
            printf("\n");
        }
        else if(x-(double)(b[i])/(double)(a[i])>0.05){
            printf("worse");
            printf("\n");
        }
        else{
            printf("same");
            printf("\n");
        }
    }
    return 0;

}
