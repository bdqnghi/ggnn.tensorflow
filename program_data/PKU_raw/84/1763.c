int main(int argc, char* argv[])
{
	int n,i,f,s,num;
	scanf("%d",&n);
	for(i=0;i<2;i++)
	{
		
		scanf("%d",&num);
		if(i==0)
		{
			f=num;
			s=num;
		}
		if(i==1)
		{
			if(num>f)
			{
				s=f;
				f=num;
				
			}
			else
			{
				f=f;
				s=num;
			}
		}
		for(i=1;i<n;i++)
		{
			scanf("%d",&num);

			{
				if(num>f)
				{
					s=f;
					f=num;
					
				}
				else
				{
					if(num==f)
					{
						f=f;
						s=s;
					}
					else
					{
						if(num>s)
						{
							s=num;
							f=f;
						}
						else
						{
							s=s;
							f=f;
						}

					}
				}

			}
		}
	}
	printf("%d\n",f);
	printf("%d",s);
	return 0;
}

