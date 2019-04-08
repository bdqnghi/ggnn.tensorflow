int reverse(int num)
{
	if(num>0)
	{
		int a[10],i,la,sum=0;
		double temp;
		for(i=0;i<=9;i++)
		{
			a[i]=-1;
		}
		for(i=0;i<=9;i++)
		{
			if(num>0)
			{
				a[i]=num%10;
				num=(int)((num-a[i])/10);
			}
		}
		for(i=0;i<=9;i++)
		{
			if(a[i]==-1)
			{
				la=i;
				break;
			}
		}
		for(i=0;i<=la;i++)
		{
			temp=pow(10.00,la-i-1);
			temp=(int)temp;
			sum=(int)(sum+a[i]*temp);
		}
		return sum;
	}
	if(num==0)
	{
		return 0;
	}
	if(num<0)
	{
		num=-num;
		return -reverse(num);
	}

}
int main()
{
	int i,num;
	for(i=1;i<=6;i++)
	{
		cin >> num;
		cout << reverse(num) << endl;
	}
	return 0;
}