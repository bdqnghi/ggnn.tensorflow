int main()
{
	char a[11],b[4];
	char max,c[14]={0};
	int i,j;
	while(scanf("%s%s",a,b)!=EOF)
	{
		max=a[0];
		for(j=1;j<strlen(a);j++)
		{
			if(a[j]>max)max=a[j];
		}
	    for(i=0;i<strlen(a);i++)
		{
			if(a[i]==max)break;
		}
	    for(j=0;j<=i;j++)
		{
			c[j]=a[j];
		}
	    for(j=i+1;j<i+4;j++)
		{
			c[j]=b[j-i-1];
		}
	    for(;j<(strlen(a)+strlen(b));j++)
		{
		c[j]=a[j-3];
		}
		c[j]='\0';
		printf("%s\n",c);
	
	}
}
