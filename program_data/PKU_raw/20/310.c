void main()
{
	char s[50],t[3],asc='\0',c,m[100][14];
	int i,j,k=0,count=0,sn;
	c=getchar();

	while(c != EOF)
	{
		s[0]=c;
		c=getchar();
		for(i=1;c!=' ';i++)
		{
			s[i]=c;
			c=getchar();
		}
		sn=i-1;
		for(i=0;i<3;i++)
		{
			c=getchar();
			t[i]=c;
		}
		for(i=0;i<=sn;i++)
		{
			if(s[i]>asc)
			{
				asc=s[i];
				count=i;
			}
		}
		for(j=sn;j>count;j--)
		{
			s[j+3]=s[j];
		}
		sn+=3;
		for(i=0,j=count;i<3;i++,j++)
		{
			s[j+1]=t[i];
		}
		asc=0;
		count=0;
		s[sn+1]='\0';
		strcpy(m[k++],s);
		c=getchar();
		c=getchar();
	}
	for(i=0;i<k;i++)
	{
		puts(m[i]);
	}
}
