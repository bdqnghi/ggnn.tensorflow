int main()
{
  int z,q,s,l,i,a;
	for(z=10;z<=50;z=z+10)
		for(q=10;q<=50;q=q+10)
			for(s=10;s<=50;s=s+10)
				for(l=10;l<=50;l=l+10)
				{
					a=(z-q)*(z-s)*(z-l)*(q-s)*(q-l)*(s-l);
					if((z+q==s+l)&&(z+l>s+q)&&(z+s<q)&&(a!=0))
					{
						for(i=50;i>=10;i=i-10)
							{
								if(z==i) cout <<"z " <<i <<endl;
								if(q==i) cout <<"q " <<i <<endl;
								if(s==i) cout <<"s " <<i <<endl;
								if(l==i) cout <<"l " <<i <<endl;
							}
					}

				}

		return 0;
}
