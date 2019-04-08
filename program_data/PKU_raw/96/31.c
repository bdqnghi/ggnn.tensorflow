int main()
{
	char a[100];
	int b[100],c,j;
	gets(a);
	if(strlen(a)==1) 
	{
		b[0]=0;
		c=a[0]-'0';
		printf("%d\n%d",b[0],c);	
	}
    else if(strlen(a)==2&&((a[0]-'0')*10+a[1]-'0')<13) 
	{
		b[0]=0;
		c=(a[0]-'0')*10+a[1]-'0';
		printf("%d\n%d",b[0],c);	
	}
	else
	{
		c=((a[0]-'0')*10+a[1]-'0')%13;
		b[0]=(int)(((a[0]-'0')*10+a[1]-'0')/13);
		for(int i=2;i<strlen(a);i++)
		{
			b[i-1]=(int)((c*10+a[i]-'0')/13);
			c=(c*10+a[i]-'0')%13;
		}
		if(b[0]==0) j=1;
		else j=0;
		for(;j<strlen(a)-1;j++) printf("%d",b[j]);
		printf("\n%d",c);
	}
	return 0;	
}