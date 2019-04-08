
int main()
{
	int i,j,len,len1,len2,min,max;
	char a[251]={'\0'},b[251]={'\0'},c[252]={'\0'};
	scanf("%s %s",a,b);
	len1=strlen(a);
	len2=strlen(b);
	if (len1==1 && len2==1)
		if(a[0]=='0' && b[0]=='0')
			printf("0");
	for(i=0;;i++)
	{
		len1=strlen(a);	
		if(a[0]=='0')
		{
			for(i=1;i<len1;i++)
				a[i-1]=a[i];
			a[len1-1]='\0';
		}
		else
			break;
	}
	for(i=0;;i++)
	{
		len2=strlen(b);	
		if(b[0]=='0')
		{
			for(i=1;i<len2;i++)
				b[i-1]=b[i];
			b[len2-1]='\0';
		}
		else
			break;
	}
	if(len1>len2)
	{   j=0;
		min=len2;
		max=len1;
	}
	else
	{
		j=1;
		min=len1;
		max=len2;
	}
	for (i=0;i<min;i++)
	{
		if(c[i]+a[len1-i-1]+b[len2-i-1]-48<58)
			c[i]=c[i]+a[len1-i-1]+b[len2-i-1]-48;
		else
		{
			c[i]=c[i]+a[len1-i-1]+b[len2-i-1]-48-10;
			c[i+1]=1;
		}
	}
	for(i=min;i<max;i++)
		if(j==0)
		{
			if(c[i]+a[len1-i-1]<58)
			    c[i]=c[i]+a[len1-i-1];
		    else
			{
		    	c[i]=c[i]+a[len1-i-1]-10;
			    c[i+1]=1;
			}
		}
		else
		{
			if(c[i]+b[len2-i-1]<58)
			    c[i]=c[i]+b[len2-i-1];
		    else
			{
		    	c[i]=c[i]+b[len2-i-1]-10;
			    c[i+1]=1;
			}
		}			
	len=strlen(c);
	if(c[len-1]==1)
		c[len-1]='1';
	for(i=len-1;i>=0;i--)
		printf("%c",c[i]);
	return 0;
}




