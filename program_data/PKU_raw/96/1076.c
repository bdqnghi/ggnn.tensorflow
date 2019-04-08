int main ()
{
    char a[100];
    scanf("%s",a);
    int n,i,m,f,j;
    n=strlen(a);
    int b[99];
    if(n==1)
    {
            printf("0\n");
            printf("%d",a[0]-'0');
    }
    else if(((a[0]-'0')*10+(a[1]-'0'))<13&&n==2)
    {
            printf("0\n");
            printf("%d",((a[0]-'0')*10+(a[1]-'0')));
    }
    else
    {
    m=((a[0]-'0')*10+(a[1]-'0'))/13;
    f=((a[0]-'0')*10+(a[1]-'0'))%13;
    if(m==0)
    {
            m=((a[0]-'0')*100+(a[1]-'0')*10+(a[2]-'0'))/13;
            f=((a[0]-'0')*100+(a[1]-'0')*10+(a[2]-'0'))%13;
            printf("%d",m);
            for(i=1;i<n-2;i++)
            {
                            b[i]=(f*10+(a[i+2]-'0'))/13;
                            f=(f*10+(a[i+2]-'0'))%13;
                            printf("%d",b[i]);
            }
            printf("\n");
            printf("%d",f);
    }
    else
    {
            printf("%d",m);
            for(i=1;i<n-1;i++)
            {
                            b[i]=(f*10+(a[i+1]-'0'))/13;
                            f=(f*10+(a[i+1]-'0'))%13;
                            printf("%d",b[i]);
            }
            printf("\n");
            printf("%d",f);
    }
    }
    return 0;
}