int reverse(int num)
{
    int i,j,y=0;
    for(i=100000000;i>=1;i=i/10)
    {
        if(num/i!=0)
        {
            for(j=1;j<=i;j=j*10)
            {
                y=10*y+num%10;
                num=num/10;
            }
            return y;
        }
        
    }
    return 0;
}
int main()
{
    int num,i;
    for(i=0;i<6;i++)
    {
        scanf("%d",&num);
        printf("%d\n",reverse(num));
    }
    return 0;
}