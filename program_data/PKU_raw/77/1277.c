char a;
int find(int i)
{
	char c;
	int j=i+1;
	while(1)
	{
		c=getchar();
		if (c==a) j=find(j)+1;
		else
		{
			cout<<i<<' '<<j;
			if(i!=0) cout<<endl;
			break;
		}
	}
	return j;
}
int main()
{
	a=getchar();
	find(0);
	return 0;
}