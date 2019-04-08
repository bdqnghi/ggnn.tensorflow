int main()
{
	int z,q,s,l;
	int lastz,lastq,lasts,lastl;
	int i;
	for(z=1;z<=5;z++)
	{
		for(q=1;q<=5;q++)
		{
			if(z==q){continue;}
			for(s=1;s<=5;s++)
			{
				if(s==z||s==q){continue;}
				for(l=1;l<=5;l++)
				{
					if(l==z||l==q||l==s){continue;}
					if((z+q==s+l)&&(z+l>s+q)&&(z+s<q))
					{
						lastz=z;
						lastq=q;
						lasts=s;
						lastl=l;
					}
				}
			}
		}
	}
	for(i=5;i>=1;i--)
	{
		if(lastz==i)
		{
			lastz=10*lastz;
			cout<<"z"<<" "<<lastz<<endl;
		}
		if(lastq==i)
		{
			lastq=10*lastq;
			cout<<"q"<<" "<<lastq<<endl;
		}
		if(lasts==i)
		{
			lasts=10*lasts;
			cout<<"s"<<" "<<lasts<<endl;
		}
		if(lastl==i)
		{
			lastl=10*lastl;
			cout<<"l"<<" "<<lastl<<endl;
		}
	}
	return 0;
}