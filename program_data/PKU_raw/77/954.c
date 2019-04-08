int main()
{
	char a[110],c,d;
	int i,j,flag,flag1;
	gets(a);
	c=a[0];d=a[strlen(a)-1];
	do
	{
		  flag=0;flag1=0;
		     for(i=0;i<(strlen(a)-1);i++)
			 {
		     	if(a[i]!=1)
				{flag=1;break;}
			 }
			for(i=0;i<(strlen(a)-1);i++)
			{	if(a[i]!=c)
					continue;
				  for(j=i+1;a[j]!=c && j<(strlen(a));j++)
				  {
					  if(a[j]==d)
					{	printf("%d %d\n",i,j);
					   a[j]=1;
					   a[i]=1;
					   flag1=1;
					}
					  if(flag1)
						  break;
				  }
					if(flag1)
						break;
			}
	}
	while(flag);
		return 0;
}
