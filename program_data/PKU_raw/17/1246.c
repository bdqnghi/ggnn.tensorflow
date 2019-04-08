int main()
{
	int n,i,j,m,x=0,y,z;	
	char c[105];	
	scanf("%d",&n);
	getchar();
    for(i=0;i<n;i++)
	{
		char b[105]={0};
		gets(b);
		m=strlen(b);
		for(j=0;j<m;j++)
		{		
		if(b[j]=='(')
			{
				c[j]='$';
			}
		else if(b[j]==')')
			{
				c[j]='?';
			}
		else if(b[j]!='('&&b[j]!=')')
			{
				c[j]=' ';
			}
		}
		y=0;
		for(j=0;j<m;j++)
		{			
			if(c[j]=='?')
			{
				z=0;y++;
				for(x=j;x>=0;x--)
				{
					if(c[x]=='$')
					{
						z++;
						if(x==j-1||y==z)
						{
						y--;
						c[x]=' ';
						c[j]=' ';
						break;
						}
					}				
				}
				if(x==-1)
				{
					y--;
					c[j]='?';
				}
			}			
		}
		for(j=0;j<m;j++)
	   {
		   printf("%c",b[j]);
	   }
	   printf("\n");
	    for(j=0;j<m;j++)
	   {
		   printf("%c",c[j]);
	   }
	   printf("\n");
	}
	return 0;
}