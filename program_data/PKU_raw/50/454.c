int main()
{
    int w,i;
    int a[12],k[12];
    a[0]=k[0]=0;
    a[1]=a[3]=a[5]=a[7]=a[8]=a[10]=a[12]=31,a[4]=a[6]=a[9]=a[11]=30,a[2]=28;
    scanf("%d",&w);   
    for(i=1;i<=12;i++){
        k[i]=k[i-1]+a[i-1];
        if((k[i]+w)%7==0)
        printf("%d\n",i);
        }
        return 0;
}