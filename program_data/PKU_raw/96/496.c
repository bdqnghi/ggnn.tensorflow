int main()
{
    int count1=0;
    char a[1000];
    scanf("%s",a);
    int b[1000],c[1000];
    int i,j,k;
    for(i=0;a[i]!='\0';i++)
    {
        b[i]=a[i]-'0';
        count1++;
    }
    if(count1==1)
    {
        printf("0\n");
        printf("%d",b[0]);
    }
    else
    {
        int d;
        int count=0;
        if((b[0]*10+b[1])>=13)
        {
            d=b[0];
            for(j=1;a[j]!='\0';j++)
            {
                c[j-1]=(d*10+b[j])/13;
                d=d*10+b[j]-c[j-1]*13;
                count++;
            }
            c[j]='\0';
            for(k=0;k<=count-1;k++)
            {
                printf("%d",c[k]);
            }
            printf("\n");
            printf("%d",d);
        }
        else
        {
            d=b[0]*10+b[1];
            for(j=2;a[j]!='\0';j++)
            {
                c[j-2]=(d*10+b[j])/13;
                d=d*10+b[j]-c[j-2]*13;
                count++;
            }
            c[j]='\0';
            if(count==0)
            {
                printf("0\n");
            }
            else
            {
                for(k=0;k<=count-1;k++)
                {
                    printf("%d",c[k]);
                }
                printf("\n");
            }
            printf("%d",d);
        }
    }
}
