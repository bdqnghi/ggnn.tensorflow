int read(char x[])
{
	int i,len,num=0;
	len=strlen(x);
	for(i=len-1;i>=0;i--)
	{
		if(x[i]!=' ')
			num++;
		else 
			break;
	}
	x[i]='\0';
	return(num);
}
void move(char x[])
{
	int len,i;
	len=strlen(x);
	for(i=len;i>=1;i--)
		x[i]=x[i-1];
	x[len+1]='\0';
	x[0]=' ';
}
int count(char x[])
{
	int len,i,p=0,m=0;
	len=strlen(x);
	for(i=0;i<len-1;i++)
	{
		if(x[i]==' ')
			p=0;
		else if(p==0)
			{
				p=1;
				m++;
			}
	}
	return(m);
}
void cut(char x[])
{
	int len;
	len=strlen(x);
	while(x[len-1]==' ')
	{
		x[len-1]='\0';
		len--;
	}
}

main()
{
	char w[3000];
	int word[300],i,j,n;
	gets(w);
	move(w);
	n=count(w);
	for(i=n-1;i>=0;i--)
	{
		word[i]=read(w);
		cut(w);
	}
	for(j=0;j<n;j++)
	{
		printf("%d",word[j]);
		if(j<n-1)
			printf(",");
	}
}