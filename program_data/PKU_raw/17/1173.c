int main()
{ 
	int n;
	int i;
	int t;
	scanf("%d",&n);
	scanf("\n");
	char c[101]={0};
	char d[101]={0};
    int j=0,k=0;
	for(i=0;i<n;i++)
	{  
        for(j=0;j<101;j++)
		{
			c[j]=0;
			d[j]=0;
		}
	
	    scanf("%s",c);
		t=strlen(c);
		for(j=0;j<t;j++)
		{
			d[j]=c[j];
		}
		for(j=0;j<t;j++)
		{
			if(c[j]!='('&&c[j]!=')') c[j]=' ';
			if(c[j]==')')
			{
				for(k=j-1;k>=0;k--)
				{
					if(c[k]=='(')
					{
						c[k]=' ';
						c[j]=' ';
						break;
					}
				}
			}
		}
		for(j=0;j<t;j++)
		{
			if(c[j]=='(')
			{
				c[j]='$';
			}
			else if(c[j]==')')
			{
				c[j]='?';
			}
		}
	
		printf("%s",d);
		printf("\n");
		printf("%s",c);
		
		printf("\n");
	}
		return 0;	
}