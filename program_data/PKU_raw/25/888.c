
int main ()
{
    char a[100]={0};
    a[99]=2;
    int n;
    cin >>n; 
    for (int j=1;j<=n-1;j++)
    {
        for (int i=99;i>=0;i--)
        {
            a[i]=a[i]*2;
        }
		for (int i=99;i>=0;i--)
		{
			if (a[i]>=10)
            {
                a[i]=a[i]-10;
                a[i-1]=a[i-1]+1;
            }
		}
    }
    int m=0;
    for (int i=0;i<=99;i++)
    {
        if (a[i]!=0)
        {
            m=i;
            break;
        }
    }
	if (n!=0)
	{
		for (int i=m;i<=99;i++)
			putchar(a[i]+48);
	}
	else
		cout <<"1";
    return 0;
}
