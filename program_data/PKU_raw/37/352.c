int main()
{
    int t,i,j,k;
    int l,count;
    char a[100000];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",a);
        l=strlen(a);
        for(j=0;j<l;j++)
        {
            count=0;
            for(k=0;k<l;k++)
                if(a[k]==a[j])
                    count++;
            if(count==1)
            {
                printf("%c\n",a[j]);
                break;
            }
            else if((j==l-1)&&(count!=1))
                printf("no\n");
        }
    }
}