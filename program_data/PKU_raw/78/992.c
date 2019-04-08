int main()
{
	int a[4],b,c,d;
	char al[4]={'z','q','s','l'};
	char e;
	for(a[0]=1;a[0]<=5;a[0]++)
	{
		for(a[1]=1;a[1]<=5;a[1]++)
		{
			for(a[2]=1;a[2]<=5;a[2]++)
			{
				for(a[3]=1;a[3]<=5;a[3]++)
				{
					if(a[0]!=a[1]&&a[0]!=a[2]&&a[0]!=a[3]&&a[1]!=a[2]&&a[1]!=a[3]&&a[2]!=a[3])
					{
						if(a[0]+a[1]==a[2]+a[3]&&a[0]+a[3]>a[2]+a[1]&&a[0]+a[2]<a[1])
						{
							for(b=0;b<4;b++)
							{
								for(c=0;c<3-b;c++)
								{
									if(a[c]<a[c+1])
									{
										d=a[c];
										e=al[c];
										a[c]=a[c+1];
										al[c]=al[c+1];
										a[c+1]=d;
										al[c+1]=e;
									}
								}
							}
							for(b=0;b<4;b++)
							{
								cout<<al[b]<<' '<<10*a[b]<<endl;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}