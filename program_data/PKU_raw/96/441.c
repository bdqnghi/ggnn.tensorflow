int main()
{
    char a[100];
    int n[100],b[100],c,i,j,t;
    scanf("%s",a);
    for(t=0;a[t]!='\0';t++)
    {
        n[t]=a[t]-'0';
    }

    c=n[0];
    for(i=0;i<t-1;i++)
    {
        b[i]=(c*10+n[i+1])/13;
        c=c*10+n[i+1]-13*b[i];
    }
    if(b[0]==0&&t!=1&&t!=2)
    {
        for(j=1;j<t-1;j++)
        {
            printf("%d",b[j]);
        }
    }
    else if(t==1)
    {
        printf("0");
    }
    else if((10*n[0]+n[1])<13)
    {
        printf("0");
    }
    else
    {
        for(j=0;j<t-1;j++)
        {
            printf("%d",b[j]);
        }
    }
    printf("\n%d",c);
}

