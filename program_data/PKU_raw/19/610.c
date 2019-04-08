int main()
{
	int i,sum=1,j,c[102],k=0,s;
	char a[102],b[102],d[102];
	gets(a+1);gets(b+1);gets(d+1);
	i=1;j=1;
	while(i<=strlen(a+1)&&j<=strlen(b+1))
	{
		if(a[i]==b[j])
		{
			i++;
			j++;
		}
		else
		{
			i=i-j+2;
			j=1;
		}
		if(j>strlen(b+1)) 
		{
			if((a[1]==b[1]&&a[i]==' ')||((a[i]==' '||a[i]=='\0')&&a[i-j]==' '))
			{
			c[k]=i-strlen(b+1);
			k++;
		
			}
			j=1;
		}
			
	}
	c[k]=-1;
	if(c[0]==-1) 
		for(i=1;i<=strlen(a+1);i++) cout<<a[i];
	else
	{
		i=1;s=0;
			while(i<=strlen(a+1))
			{	
				
				if(i!=c[s])
				{
					cout<<a[i];
					i++;
				}
				else
				{
					i=i+strlen(b+1);
					s++;
					for(j=1;j<=strlen(d+1);j++)
						cout<<d[j];
					
				}
		
		}
	}
	cout<<endl;
	
	return 0;
}
