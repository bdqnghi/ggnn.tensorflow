
int main() 
{
	int n,m,counter=0,num,a[300],i;
	cin>>n>>m;	
	do
	{
		for (i=0;i<300;i++)
			a[i]=1;
		num=n;
		i=-1;
		while (num>1)
		{
			while (counter<m)
			{
				i++;
				if (i>=n) i=0;
				if (a[i]==1) counter++;
			}
			a[i]=0;
			num--;
			counter=0;
		}
		for (i=0;i<n;i++)
			if (a[i]!=0) cout<<(i+1)<<endl;
		cin>>n>>m;
	}
	while (n!=0 && m!=0);
	return 0;
}