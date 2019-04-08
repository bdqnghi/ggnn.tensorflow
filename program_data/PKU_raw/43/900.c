int main()
{
	int x,i,j,bl,g,a[2001],b[10001];
	cin>>x;
	if (x<6||x%2==1)
	{
		cout<<"Error!";
	}
	else 
	{
		g=0;
		for (i=3;i<=x;i++)
		{
			bl=0;
			for (j=2;j<i;j++)
				if (i%j==0)
				{
					bl=1;
					break;
				}
			if (bl==0)
			{
				g++;
				a[g]=i;
				b[i]=1;
			}
		}
      for (i=1;i<=g;i++)
	  {
		  if (a[i]*2<=x)
		  {
			  if (b[x-a[i]]==1)
			  {
				  cout<<a[i]<<" "<<x-a[i]<<endl;
			  }
		  }
		  else break;
	  }
	}
}