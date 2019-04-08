void main()
{
	char str[300],c[300],p;
	int i,j,t,f=0,m,a[300];
	gets(str);
	m=strlen(str);
	for(i=0;i<=(m-1);i++)
	{
		if(str[i]<=122&&str[i]>=97)
		{
			
			t=1;
			for(j=i+1;j<=(m-1);j++)
			{
				if(str[i]==str[j])
				{
					t++;
				str[j]='}';
				}/*'}'=125??????????????????*/
				
			}
			a[i]=t;
			
		}
		else 
		{
			f++;
			a[i]=0;
			str[i]='}';
		}
	}


	if(f==m)
		printf("No");
	else 
		for(i=0;i<=m-1;i++)
		{
			c[i]=str[i];
		}
	for(j=0;j<m;j++)
		for(i=0;i<m-j;i++)
		{
			if(c[i]>c[i+1])
			{
				p=c[i];
				c[i]=c[i+1];
				c[i+1]=p;
			}
		}
		for(j=0;j<=m-1;j++)
		{
			for(i=0;i<=m-1;i++)
			{
				if(str[i]<=122&&str[i]>=97&&c[j]==str[i])
				{
					printf("%c=%d\n",str[i],a[i]);
				}

			}
		}
	

}