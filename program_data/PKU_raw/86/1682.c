int main()
{
	int n,i,m,a[20],j,s,k,t;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>m;
		if(m==0)
		{
			s=60;
		}
		else
		{
		    for(j=0;j<m;j++)
		    {
			    cin>>a[j];
		    }
			for(k=m-1;;k--)
			{
				if(a[k]+3*(k+1)<=63)
				{
					break;
				}
			}
			t=a[k]+3*k;
			if(t<57)
			{
				s=a[k]+(57-t);
			}
			else
			{
				s=a[k];
			}
		}
		cout<<s<<endl;
	}
	return 0;
}