int main()
{
	int z,q,s,l;
	for(z=10;z<=50;z+=10)
	{
		for(q=10;q<=50;q+=10)
		{
			if(q==z)continue;
			else
			{
				for(s=10;s<=50;s+=10)
				{
					if(s==z||s==q)continue;
					else
					{
						for(l=10;l<=50;l+=10)
						{
							if(l==z||l==q||l==s)continue;
							else
							{
								if((z+q==s+l)&&(z+l>s+q)&&(q>z+s))
									for(int j=50;j>=10;j-=10)
									{
										if(z==j)cout<<'z'<<' '<<j<<endl;
										else if(q==j)cout<<'q'<<' '<<j<<endl;
										else if(s==j)cout<<'s'<<' '<<j<<endl;
										else if(l==j)cout<<'l'<<' '<<j<<endl;
									}
							}
						}
					}
				}
			}
		}
	}
	
	return 0;
}