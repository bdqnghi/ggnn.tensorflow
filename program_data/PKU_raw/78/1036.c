int main()
{
	int z,q,s,l;
	for(z=10;z<=50;z=z+10)
	{
		for(q=10;q<=50;q=q+10)
		{
			if(z==q)
				continue;
			else
			{
				for(s=10;s<50;s=s+10)
				{
					if((s==z)||(s==q))
						continue;
					else
					{
						for(l=10;l<=50;l=l+10)
							{
								if((l==z)||(l==q)||(l==s))
									continue;
								else
								{
									if((z+q==s+l)&&(z+l>s+q)&&(q>z+s))
									{
										for(int i=50;i>0;i=i-10)
										{
											if(z==i)
												cout<<"z"<<" "<<z<<endl;
											if(q==i)
												cout<<"q"<<" "<<q<<endl;
											if(s==i)
												cout<<"s"<<" "<<s<<endl;
											if(l==i)
												cout<<"l"<<" "<<l<<endl;
										}
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