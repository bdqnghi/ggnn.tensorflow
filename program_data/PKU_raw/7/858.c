int main()
{
	char s[256],a[256],b[256],c[256];
	scanf("%s%s%s",s,a,b);
	int i,j,n,k,m=0,max;
	for(i=0;i<strlen(s)-strlen(a)+1;i++)
		{
			for(j=0;j<strlen(a);j++)
			{
				c[j]=s[i+j];
			} 
				c[j+1]='\0';
				if(strcmp(c,a)==0) 
				{
				break;
				}
				c[j]=0;
				m++;
		}

	if(strlen(b)>strlen(a))
	{
		max=strlen(b);
	}
	else
	{
		max=strlen(a);
	}
		if(m!=strlen(s)-strlen(a)+1)
		{
				for(j=0;j<max;j++) //???????????????a?b?????????????????????
					{
						if(b[j]=='\0')
						{
						break;
						}
						s[i+j]=b[j];
					}
					printf("%s",s);
		}
		else
		{
			printf("%s",s);
		}
	return 0;
}
