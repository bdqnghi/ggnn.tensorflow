int flag=0;
void reverse(int num)
{
	if(flag==1||num%10!=0)//flag ??????????0??
	{
		if(num%10!=0) flag=1;
		cout<<num%10;
	}
	if(num/10!=0)
		reverse(num/10);//??
}
int main()
{
	int i;
	for(i=0;i<6;i++)
	{
		flag=0;
		int n,u;
		cin>>n;
		if(n<0) 
		{
			cout<<'-';
			reverse(-n);
			cout<<endl;
		}
		else if(n>0)
		{
			reverse(n);
			cout<<endl;
		}
		else if(n==0)
		{
			cout<<'0'<<endl;
		}
	}
	return 0;
}
