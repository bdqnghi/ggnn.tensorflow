int main()
{
	int i,n,z,q,s,l;
	char a[6];
	for(i=0;i<=5;i++)
		a[i]=0;
	for(z=1;z<=5;z++)
	{
		for(q=1;q<=5;q=q+1)
		{
			if(z==q)continue;
			for(s=1;s<=5;s=s+1)
			{
				if(s==z||s==q)continue;
				for(l=1;l<=5;l=l+1)
				{
					if(l==z||l==q||l==s)continue;
					if((z+q==s+l)+(z+l>s+q)+(z+s<q)==3)
					{a[z]='z';
					 a[q]='q';
					 a[s]='s';
					 a[l]='l';
					 for(i=5;i>=1;i--)
					 {
						 if(a[i]!=0)cout<<a[i]<<" "<<10*i<<endl;
					 }
					}
				}
			}
		}
	}
	return 0;
}