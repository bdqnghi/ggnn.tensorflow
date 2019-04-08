void reverse(int a)
{
	cout<<a%10;
	if(a/10!=0)
	reverse(a/10);
}
int main()
{
	int a,i,j;
	for(i=1;i<=6;i++)
	{
		cin>>a;
		if(a>=0)
		{
			for(j=0;;j++)
			{
				if(a%10==0)
					a=a/10;
				else
					break;
			}
			reverse(a);
			cout<<endl;
		}
		else
		{
			a=-a;
			for(j=0;;j++)
			{
				if(a%10==0)
					a=a/10;
				else
					break;
			}
			cout<<"-";
			reverse(a);
			cout<<endl;
		}
	}
	return 0;
}




