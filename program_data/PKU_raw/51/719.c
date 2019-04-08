char a[501][5],s[501],tem[5];
int b[501]={0},sum[501]={0};
int main()
{
    int n,i,j,l,t,flag=0,point=1;


    scanf("%d",&n);
    scanf("%s",s);
    l=strlen(s);    for(i=0;i<l-n+1;i++)
    {
        t=0;
        for(j=i;j<i+n;j++)
        {
            a[i][t]=s[j];
            t++;
        }
       
    }
    for(i=0;i<l-n;i++)
    {
        if(b[i]==0)
        {
                t=1;
        for(j=i+1;j<l-n+1;j++)
        {

                if(strcmp(a[i],a[j])==0)
                {
                    t++;
                    b[j]=1;
                }
        }
        sum[i]=t;
        if(sum[i]>1)
        flag=1;
        }
    }


    if(flag==1)
    {
    for(i=0;i<l-n;i++)
    {
        for(j=i+1;j<l+n-1;j++)
        {
            if(sum[j]>sum[i])
            {
                t=sum[i];
                sum[i]=sum[j];
                sum[j]=t;
                strcpy(tem,a[j]);
                strcpy(a[j],a[i]);
                strcpy(a[i],tem);
            }
        }

    }

    for(i=1;i<l-n+1;i++)
    {
        if(sum[i]==sum[i-1])
        point++;
        else
        break;
    }
    printf("%d\n",sum[0]);
    for(i=1;i<=point;i++)
    {
        printf("%s\n",a[i-1]);
    }
    }
    else
    {
        printf("NO\n");
    }
 return 0;

}
