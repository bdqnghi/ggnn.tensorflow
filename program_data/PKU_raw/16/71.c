
int main()
{
    int n;
    int i=0;
    int num[5];
    scanf("%d",&n);
    while( n/10!=0 )
    {
           num[i++]=n%10;
           n/=10;       
    }
    num[i]=n;
    for( int m=0;m<=i;m++ )
    printf("%d",num[m]);
printf("\n");
}
