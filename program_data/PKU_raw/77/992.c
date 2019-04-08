int main()
{
    char a[200];
    scanf("%s",a);
    int i,j,k;
    int len=strlen(a);
    char b=a[0];
    for(i=0;i<len;i++)
    {
        if(a[i]!=b&&a[i]!=0)
        {
            for(j=i;j>=0;j--)
            {
                if(a[j]!=a[i]&&((i-j-1)%2)==0&&a[j]!=0)
                {
                    a[j]=0;
                    a[i]=0;
                    printf("%d %d\n",j,i);
                    break;
                }
            }
        }
    }


}