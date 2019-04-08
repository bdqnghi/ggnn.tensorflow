int main()
{
	int n,n1,n2,i,h,hmax;
	cin>>n;
	h=0;
	hmax=h;
    for(i=1;i<=n;i=i+1)
	{
		cin>>n1>>n2;
			if(n1>=90&&n1<=140&&n2>=60&&n2<=90)
			{
				h=h+1;
			}
			else
			{
				if(h>hmax)
				{
					hmax=h;
				    h=0;
				}
			else
			{
				hmax=hmax;
			    h=0;
			}
			} continue;
	}
	if(h>hmax)
	{
		hmax=h;
	}
	else
	{
		hmax=hmax;
	}
	cout<<hmax<<endl;
	return 0;
}