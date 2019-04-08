int check(int num)
{
	int k=3,flag=1;
	if(num%2==0)
		flag=0;
	else if(num==3||num==5||num==7)
		flag=1;
	else
	{
		while(k<=sqrt(num))
		{
			if(num%k==0)
			{
				flag=0;
				break;
			}
			k=k+2;
		}
	}
	return flag;
}
int main()
{
	int i=6,n,num1,num2;
	scanf("%d",&n);
	while(i<=n)
	{
	    num1=3;
		while(num1<=i/2)
		{
		    if(check(num1))
		    {
              num2=i-num1;
              if(check(num2))
                  {
                     printf("%d=%d+%d\n",i,num1,num2);
                     break;
                  }
              else num1=num1+2;
		    }
		    else num1=num1+2;
		}
		i=i+2;
	}
	return 0;
}


