int main()
{
	int z,q,s,l,a[4],i,t,j;
	for (z=10;z<=50;z=z+10)
	{
		for (q=10;q<=50;q=q+10)
		{
			for (s=10;s<=50;s=s+10)
			{
				for (l=10;l<=50;l=l+10)
				{
					if (z!=q&&z!=s&&z!=l&&q!=s&&q!=l&&s!=l&&z+q==s+l && z+l > s+q && z+s < q)
					{
						a[0]=z;a[1]=q;a[2]=s;a[3]=l;
						for (j=2;j>=0;j=j-1)
						{
						for (i=0;i<=j;i++)
						{
							if (a[i]<a[i+1])
							{
								t=a[i];
								a[i]=a[i+1];
								a[i+1]=t;
							}
						}
						}
						for (i=0;i<=3;i++)
						{
						if (a[i]==z)
							cout<<"z "<<z<<endl;
						if (a[i]==q)
							cout<<"q "<<q<<endl;
						if (a[i]==s)
							cout<<"s "<<s<<endl;
						if (a[i]==l)
							cout<<"l "<<l<<endl;

						}
					}
				}
			}
		}
	}


	return 0 ;
}