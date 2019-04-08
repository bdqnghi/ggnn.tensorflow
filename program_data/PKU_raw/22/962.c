int main()
{
    int a[300]={0},i=1,j,f=0,s=0;
    for(j=0;scanf("%d",&a[j]);++j)
        if(getchar()=='\n')break;
    for(;j>=0;j--)
        if(a[j]>f){s=f;f=a[j];}
        else if(a[j]<f&&a[j]>s)s=a[j];
    if(f==s||s==0)printf("No");
        else printf("%d",s);
    return 0;
}