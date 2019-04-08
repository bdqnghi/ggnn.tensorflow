int main()
{
    int m,i,j,k,flag,a;
    scanf("%d",&m);
    if(m>=6&&m<=10000)
    {
        for(k=3;k<=m/2;k=k+2)
        {
            flag=1;
            for(i=2;i<k;i++)
            {
                if(k%i==0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                a=m-k;
                for(j=2;j<a;j++)
                {
                    if(a%j==0)
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==1)
                    printf("%d %d\n",k,a);
            }
        }
    }
    return 0;
}