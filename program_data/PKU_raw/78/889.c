int main()
{
	int i,j,m,n,z,q,s,l,a[4],x,y,t;
	for(i=1;i<=5;i++)
	{
		z=i*10;
		for(j=1;j<=5;j++)
		{
			q=j*10;
			for(m=1;m<=5;m++)
			{
				s=m*10;
				for(n=1;n<=5;n++)
				{
					l=n*10;
					if((z+q)==(s+l)&&(z+l)>(s+q)&&(z+s)<q&&z!=q&&z!=s&&z!=l&&q!=s&&q!=l&&s!=l)
					{
						a[0]=z;
						a[1]=q;
						a[2]=s;
						a[3]=l;
						for(x=1;x<=3;x++)
						{
							for(y=3;y>=x;y--)
							{
								if(a[y]>a[y-1])
								{
									t=a[y];
									a[y]=a[y-1];
									a[y-1]=t;
								}
							}
						}
						for(i=0;i<=3;i++)
						{
							if(i==0)
							{
								if(a[i]==z)
									printf("z %d",z);
								else if(a[i]==q)
									printf("q %d",q);
								else if(a[i]==s)
									printf("s %d",s);
								else
									printf("l %d",l);
							}
							else
							{
								if(a[i]==z)
									printf("\nz %d",z);
								else if(a[i]==q)
									printf("\nq %d",q);
								else if(a[i]==s)
									printf("\ns %d",s);
								else
									printf("\nl %d",l);	
							}
						}
					}
				}
			}
		}
	}
	return 0;
}