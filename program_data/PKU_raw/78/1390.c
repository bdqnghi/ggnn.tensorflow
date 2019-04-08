

int main()
{
	int z,q,s,l,i;
	char weight[6];
	for(z=1;z<6;z++)
	{
		for(q=1;q<6;q++)
		{
			if(z==q)
				continue;
			else
				for(s=1;s<6;s++)
				{
					if(s==z||s==q)
						continue;
					else
						for(l=1;l<6;l++)
						{
							if(l==z||l==q||l==s)
								continue;
							else
								if((z+q)==(s+l)&&(z+l)>(s+q)&&(z+s)<q)
								{
									weight[z]='z';
									weight[q]='q';
									weight[s]='s';
									weight[l]='l';
									for(i=5;i>0;i--)
									{
										if(i==z||i==q||i==s||i==l)
											cout<<weight[i]<<" "<<i*10<<endl;
										else
											continue;
									}
								}
						}
				}
		}
	}
	return 0;
}
