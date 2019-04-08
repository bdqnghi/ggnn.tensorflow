int main()
{
	char a[110];
	int l,i,j,p=0;
	while(scanf("%s",a)!=EOF) 
	{
	
		printf("%s\n",a);
		l=strlen(a);
		for(i=0;i<l;i++)
		{
			p=0;
			if(a[i]=='(')
			{
				for(j=i;j<l;j++)
				{
					if(a[j]=='(')
						p++;
					if(a[j]==')')
						p--;
					if(p==0)
						break;
				}
				if(p!=0)
					a[i]='$';
				else
					a[i]=' ';
			}
		}
		for(i=l-1;i>=0;i--)
		{
			p=0;
			if(a[i]==')')
			{
			
				for(j=i;j>=0;j--)
				{
					
					if(a[j]==')')
						p++;
					if(a[j]==' ')
						p--;
					if(p==0)
					{break;}
				}
				if(p!=0)
					a[i]='?';
				else
					a[i]=' ';
			}
		}
		for(i=0;i<l;i++)
		{
			if(a[i]!='?'&&a[i]!='$')
				a[i]=' ';
		}


		puts(a);
	} 
	return 0;
}