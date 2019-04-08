char b[100];
void main()
{
	void rev(char a[]);
	char a[100],c[100];
	int i,k,j,z;
	for(z=0;z<6;z++)
	{
		j=0;
		gets(a);
		k=strlen(a);
		if(a[0]=='-'&&a[k-1]=='0')
	{
		for(i=k-1;i>0;i--)
		{
			if(a[i]=='0')
				j=j+1;
			else
				break;
		}
		for(i=0;i<k-j-1;i++)
			c[i]=a[i+1];
		c[k-j-1]='\0';
		rev(c);
		printf("-");
		puts(b);
	}
    
	else if(a[0]=='-'&&a[k-1]!=0)
	{
		for(i=0;i<k-1;i++)
			c[i]=a[i+1];
		c[k-1]='\0';
		rev(c);
		printf("-");
		puts(b);
	}
	else if(a[k-1]=='0'&&a[0]!='-')
	{
		for(i=k-1;i>0;i--)
		{
			if(a[i]=='0')
				j=j+1;
			else
				break;
		}
		for(i=0;i<k-j;i++)
			c[i]=a[i];
		c[k-j]='\0';
		rev(c);
		puts(b);
	}
	
	else
	{
		rev(a);
		puts(b);
	}}
}
void rev(char a[])
{
	int i,k;
	k=strlen(a);
	for(i=0;i<k;i++)
		b[k-1-i]=a[i];
	b[k]='\0';
}