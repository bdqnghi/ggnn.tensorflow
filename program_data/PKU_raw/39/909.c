struct stu 
{
       char name[20],ganbu,xibu;
       int qimo,banji,lunwen,sum;
};
int main()
{
    struct stu a[100],t;
    int n,i,sum=0,j,k;
    char c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    scanf("%s",a[i].name);
                    c=getchar();
                    scanf("%d %d %c %c %d",&a[i].qimo,&a[i].banji,&a[i].ganbu,&a[i].xibu,&a[i].lunwen);
                    a[i].sum=0;
                    if(a[i].qimo>80&&a[i].lunwen>=1)
                    a[i].sum+=8000;
                    if(a[i].qimo>85&&a[i].banji>80)
                    a[i].sum+=4000;
                    if(a[i].qimo>90)
                    a[i].sum+=2000;
                    if(a[i].qimo>85&&a[i].xibu=='Y')
                    a[i].sum+=1000;
                    if(a[i].banji>80&&a[i].ganbu=='Y')
                    a[i].sum+=850;
                    sum+=a[i].sum;
    }
    for(j=1;j<=n;j++)
     {               for(k=0;k<n-j;k++)
                    {
                                      if(a[k].sum<a[k+1].sum)
                                      {
                                           t=a[k];
                                           a[k]=a[k+1];
                                           a[k+1]=t;
                                      }
                    }
    }
    printf("%s\n%d\n%d\n",a[0].name,a[0].sum,sum);

    return 0;
}
