int main()
{
    char a[100],d[100];
    int  b[100],c[99],m,i,k;
    gets(a); 
    m=strlen(a);
    for (i=0;i<m;i++)
    b[i]=a[i]-'0';
    if(m==1) printf("0");
    if(m==2&&b[0]<2&&b[1]<3)  printf("0"); 
    for(i=0;i<m-1;i++)
    {
                     c[i]=(b[i]*10+b[i+1])/13;
                     k=(b[i]*10+b[i+1])%13; 
                     b[i+1]=k;
    }
    if(c[0]==0)
    {
               for(k=1;k<m-1;k++)
               printf("%d",c[k]);
    }
    else
    {
        for (k=0;k<m-1;k++)
        printf("%d",c[k]);
    }
    printf("\n");
    printf("%d",b[m-1]);
    getchar();
    getchar(); 
}