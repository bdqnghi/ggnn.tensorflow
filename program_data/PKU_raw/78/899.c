//???
int main()
{
    int z,q,s,l,i;
	for(z=50;z>=10;z=z-10)
	{
		for(q=50;q>=10;q=q-10)
		{
			for(s=50;s>=10;s=s-10)
			{
				for(l=50;l>=10;l=l-10)
				{
		if((z+q==s+l)+(z+l>s+q)+(z+s<q)+(z!=s&&z!=q&&z!=l&&q!=s&&q!=l&&s!=l)==4)
		{
		  
				for(i=50;i>=10;i=i-10)
				{
				  if(z==i)
					  cout<<'z'<<' '<<z<<endl;
				  if(q==i)
					  cout<<'q'<<' '<<q<<endl;
				  if(s==i)
					  cout<<'s'<<' '<<s<<endl;
				  if(l==i)
					  cout<<'l'<<' '<<l<<endl;
				}
			}
		}
		}
		}
	}
	
	return 0;

}