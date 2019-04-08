void bigmulti(char a[],char b[],char c[])
{
    int i,tem[400],j,k,la=strlen(a),lb=strlen(b);
    int sum[800],num1[400],num2[400];
    memset(sum,0,sizeof(sum));
    memset(num1,0,sizeof(num1));
    memset(num2,0,sizeof(num2));
    for(i=0;i<la;i++)
    num1[i]=a[la-1-i]-'0';
    for(i=0;i<lb;i++)
    num2[i]=b[lb-1-i]-'0';
    for(i=0;i<lb;i++)  
    {
        memset(tem,0,sizeof(tem));
        tem[0]=num1[0]*num2[i];
        for(j=1;j<=la;j++)
        {
            tem[j]=num1[j]*num2[i]+tem[j-1]/10;
            tem[j-1]%=10;
        }
        for(j=0;j<=200;j++)
        {
            if(j==0&&i==0)
            sum[0]=tem[0];
            else
            {
                sum[i+j]=sum[i+j]+tem[j]+sum[i+j-1]/10;
                sum[i+j-1]%=10;
            }
        }
    }
    for(i=la+lb;i>=0&&sum[i]==0;i--);
    c[i+1]='\0';
    for(j=0;j<=i;j++)
    c[i-j]=sum[j]+'0';
}
    
int main()
{
    int n,i;
    char s[1000]="1",a[1000];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        bigmulti(s,"2",a);
        strcpy(s,a);
    }
    printf("%s",s);
    return 0;
}