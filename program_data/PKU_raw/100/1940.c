int main()
{
	int l1=0,k1=0,l=0;
	char i,n;
	char a[N]={0};
	gets(a);
	for(i=0;i<300;i++)
	{
		if(a[i]>=65&&a[i]<=90||a[i]>=97&&a[i]<=122)
			l++;
		if(a[i]==0)
			break;

	}
if(!l)
cout<<"No"<<endl;
else{
	for(i=65;i<91;i++)
	{
        for(n=0;n<300;n++)
		{
			if(a[n]==i)
            {
				l1++;				
			}
			if(a[n]==0)
				break;

		}
		if(l1!=0)
		cout<<i<<"="<<l1<<endl;
		l1=0;
	}
	for(i=97;i<123;i++)
	{
        for(n=0;n<300;n++)
		{
			if(a[n]==i)
            {
				k1++;				
			}
			if(a[n]==0)
				break;

		}
		if(k1!=0)
		cout<<i<<"="<<k1<<endl;
		k1=0;
	}
}
    return 0;
}