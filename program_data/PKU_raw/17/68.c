int main()
{
	int i,j,m,flag,len,k,x;
	int a[100],b[100];
	char str[101],s[101];
	while(gets(str))
	{
		for(i=0;i<100;i++)
		{
			a[i]=0;
			b[i]=0;
		}
		m=0;
		for(i=0;str[i]!='\0';i++)
		{
			if(str[i]==')')
			{
				j=i;
				x=1;
				while(j>=0)
				{
					if(str[j]=='(')
					{
						for(k=0;k<m;k++)
						{
							if(a[k]==j) x=0;
						}
						if(x!=0)
						{

						a[m]=j;
						b[m]=i;
						m++;
						break;
						}
					}
					j--;
					x=1;
				}
			}
		}
		
		strcpy(s,str);
		flag=1;
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]=='(')
			{
				for(j=0;j<m;j++)
				{
					if(i==a[j]) 
					{
						flag=0;
						break;
					}
				}
				if(flag==0) s[i]=' ';
				else s[i]='$';
			}
			else if(s[i]==')')
			{
				for(j=0;j<m;j++)
				{
					if(i==b[j])
					{
						flag=0;
						break;
					}
				}
				if (flag==0) s[i]=' ';
				else s[i]='?';
			}
			else s[i]=' ';
			flag=1;
		}
	len=strlen(s);
	for(j=len;j>=0;j--)
	{
		if((s[j]==' ')||(s[j]=='\0'))
		{
			if(s[j-1]!=' ')
			{
				s[j]='\0';
				break;
			}
		}
	}
	printf("%s\n",str);
	j=0;
	while(s[j]==' ') j++;
	for(i=j;s[i]!='\0';i++)
	{
		printf("%c",s[i]);
	}
	printf("\n");
	
	
	}
	return 0;
}
