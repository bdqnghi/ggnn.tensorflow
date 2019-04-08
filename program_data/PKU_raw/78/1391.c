int main()
{
	int z,q,s,l,m[4],max=0,i,j;
	char n[4][2]={"z","q","s","l"};
	for(z=1;z<6;z++)
	{
		for(q=1;q<6;q++)
		{
			if(q!=z)
			{
				for(s=1;s<6;s++)
				{
					if(s!=q&&s!=z)
					{
						for(l=1;l<6;l++)
						{
							if(l!=z&&l!=s&&l!=q)
							{
								if((z+q==s+l)&&((z+l)>(s+q))&&(z+s<q))
								{
									m[0]=z;
									m[1]=q;
									m[2]=s;
									m[3]=l;
									for(j=0;j<4;j++)
									{
										for(i=0;i<4;i++)
										{
											if(m[i]>m[max])
											{
												max=i;
											}
										}
											cout<<n[max]<<' '<<m[max]*10<<endl;
											m[max]=0;
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

							