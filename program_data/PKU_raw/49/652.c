int main()
{
	char a[550];
	int i,j,k,t,m,n;
	i=0;
	while(cin.get(a[i]))
	{
		if(a[i]=='\n')
		{
			t=i-1;
			break;
		}
		else
			i++;
	}
	t=i-1;
	for(j=1;j<(t+1)/2;j++)
	{
		for(i=0;i<t;i++)
		{
			m=0;
		    for(k=0;k<j;k++)
		    {
				if(i+2*j-k-1<=t)
				{
					if(a[i+k]==a[i+2*j-k-1])
					{
						m++;
					}
				}
			}
			if(m==j)
			{
				for(n=i;n<i+2*j;n++)
				{
					cout<<a[n];
				}
				cout<<endl;
			}
		}
	}
	 
	return 0;
}


			 

	