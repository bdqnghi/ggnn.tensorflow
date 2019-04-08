int main()
{
	int rank[100],a,b,c,d,e,name[60],i,p;                       /*    ??????*/
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
		{
			for(c=1;c<=5;c++)
			{
				for(d=1;d<=5;d++)
				{
					for(e=1;e<=5;e++)
					{

						if(a!=b&&b!=c&&c!=d&&d!=e&&a!=c&&
							a!=d&&a!=e&&b!=d&&b!=e&&c!=e&&e!=2&&e!=3)
						{
			                for(i=1;i<=5;i++)                      /* ??????*/
						    {
		                       name[i]=0;
                            }
                        if(e==1)
					   name[a]=1;
                        if(b==2)
						name[b]=1;
					    if(a==5)
					    name[c]=1;
					    if(c!=1)
						name[d]=1;
						if(d==1)
						name[e]=1;
						
						if(name[1]==1&&name[2]==1&&name[3]==0&&name[4]==0&&name[5]==0)
						{   rank[1]=a;
						    rank[2]=b;
							rank[3]=c;
							rank[4]=d;
							rank[5]=e;
						}
						}
					}
				}
			}
		}
	}
	for(i=1;i<=4;i++)                            /*  ??????*/
		cout<<rank[i]<<" ";
	cout<<rank[5];
	return 0;
}
						
         