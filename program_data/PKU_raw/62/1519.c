int main()
{
	char a[200];
	int l,t=1;
	cin.getline(a,200);
	l=strlen(a);
	for(int i=0;i<l;i++)
	{
		if(*(a+i)!=' ')
		{
			t=0;
			cout<<*(a+i);
		}
		else if((*(a+i)=' ')&&t==0)
		{
			cout<<*(a+i);
			t=1;
		}
	}
    return 0;
}
