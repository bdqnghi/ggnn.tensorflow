int reverse(int a)
{
	int i,j=0,b[20],c=0,t=0;
	if(a>0);
	else
		{a=-a;t=1;}
	for(i=0;a>0;i++)
	{
		b[i]=a%10;
		a=a/10;
	}
	for(j=0;j<i;j++)
		c=10*c+b[j];
	if(t==1)
		c=-c;
	return c;
}
int main()
{
	int i=0,a=0;
	for(i=0;i<6;i++)
	{
		while(cin>>a)
			cout<<reverse(a)<<endl;
	}
	return 0;
}