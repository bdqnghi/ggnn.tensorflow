int reverse(int num);        //?????
int main()
{
	int a[7];                //????????
	int i=0;
	for(i=1;i<=6;i++)
	{
		cin>>a[i];
		a[i]=reverse(a[i]);  //????????
	}
	for(i=1;i<=6;i++)
	{
		cout<<a[i]<<endl;    //?????
	}
	return 0;
}
int reverse(int num)         //??????
{
	int n=0,j=0,t;
	int shuzi[100];
	for(j=1;j<100;j++)
	{
		shuzi[j]=0;
	}
	if(num>0)
	{
		t=num;
		while(num!=0)        //?????
		{
			num=num/10;
			n++;
		}
		num=t;
		for(j=1;j<=n;j++)    //?????          
		{
			shuzi[j]=num%10;
			num=num/10;
		}
		for(j=1;j<=n;j++)    //?????          
		{
			num=shuzi[j]+num*10;
		}
	}
	if(num<0)
	{
		t=num;
		while(num!=0)
		{
			num=num/10;
			n++;
		}
		num=-t;
		for(j=1;j<=n;j++)                          
		{
			shuzi[j]=num%10;
			num=num/10;
		}
		for(j=1;j<=n;j++)                          
		{
			num=shuzi[j]+num*10;
		}
		num=(-1)*num;
	}
	return num;
}