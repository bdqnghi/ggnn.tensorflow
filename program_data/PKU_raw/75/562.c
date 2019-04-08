int main()
{
	int n=0,i=1,j=1,max=-1000,x;
	char w=',';
	int a[1000],b[1000],c[1000];
	for (int k=0;k<1000;k++)
	{
		c[k]=0;
	}
	cin >> a[0];
	while(scanf(",%d",&x)>0)
	{
		a[i]=x;
        n++;
		i++;
	}
	cin >> b[0];
	while(scanf(",%d",&x)>0)
	{
		b[j]=x;
        j++;
	}
	for (int k=0;k<i;k++)
	{
		for (int p=a[k];p<b[k];p++)
		{
			c[p]++;
		}
	}
	for (int k=1;k<1000;k++)
	{
		if (max<c[k])
		max=c[k];
	}
	if (n==0)
	{
             cout << "1 1";
    }
    else
	{
        cout << n+1<< ' ' << max;
        }
	cin.get();
	cin.get();
	return 0;
}
