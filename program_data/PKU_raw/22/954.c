int main()
{
    int a[300],c[300],temp,i,j,n,s=0,max;

    scanf("%d",&a[0]);
   c[0]=',';
  a[1]=-1;
    for (i=1;c[i-1]!='\0'&&scanf("%c",&c[i])!=EOF&&scanf("%d",&a[i])!=EOF;i++)
    {
        s=s+1;

    }
    for (i=0;i<=s;i++)
    {
        for(j=i;j<=s;j++)
        {
            if (a[i]>=a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for (i=s;i>=0;i--)
    {
        if (a[i]!=a[s])
        {max=a[i];break;
        }
    }

    if ((a[0]==a[s])||(a[1]==-1))
    printf("No");
    else
    printf("%d",max);
}
