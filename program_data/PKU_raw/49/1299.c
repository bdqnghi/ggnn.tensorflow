
int main()
{
	char a[501];
	cin>>a;
	int n = strlen(a);
	char b[n];
	int i,j,k = 0,p,q,s = 0;

	for (i = 2;i < n;i++)
	{
		for (k = 0;k < n - i+1;k++)
		{
			s = 0;
			for (j = 0;j < i;j++)
		    {
				b[j] = a[k + j];
		    }

			for (p = 0,q = i-1;p < q;p++,q--)
				if (b[p] == b[q])
					s++;

			if (s == i/2)
		    {
				for(int x = 0;x < i;x++)
			    {
					if (x == i-1)
						cout<<b[x]<<endl;
				    else
					    cout<<b[x];
			    }
		    }
		}
	}
	return 0;
}