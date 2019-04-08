

int main ()
{
	char a[1001],b[1001];

	int i,j,k,n,l1,l2,c[1001],d[1001];
	
	cin >>n;
	
	for (i=0;i<n;i++)
	{		
		cin.get ();
		cin.getline (a,1000);
		l1=strlen (a);
		cin.getline (b,1000);
		l2=strlen (b);
		for (k = 0; k <1001; ++k) c[k] = d[k] = 0;
		int ll1 = l1, ll2 = l2;
		for (j=0;j<l1;j++)
			c[--ll1]=a[j]-'0';
		for (j=0;j<l2;j++)
			d[--ll2]=b[j]-'0';
		for (k=0;k<l1;k++)
		{
			if (c[k]-d[k]<0)
			{
				c[k]=10+c[k]-d[k];
				c[k+1]--;
			}
			else c[k]=c[k]-d[k];
		}
		for (k=l1-1;k>=0;k--)
		{
			if (c[k]!=0)
			{
				j=k;break;
			}
		}
		for (k=j;k>=0;k--)
		{
			cout <<c[k];
		}
		cout <<endl;
	}
	return 0;
}




