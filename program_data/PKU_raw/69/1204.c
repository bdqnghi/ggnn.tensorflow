int main()
{
	int a[250];
	int b[250];
	int c[251];
	char d[251];
	char e[251];
	int i,len1,len2,len;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	scanf("%s",d);
	scanf("%s",e);
	for(i=0;;i++)
		if(d[i]=='\0')
			break;
	len1=i;
	for(i=0;;i++)
		if(e[i]=='\0')
			break;
	len2=i;
	for(i=0;i<len1;i++)
		a[i]=d[len1-i-1]-'0';
	for(i=0;i<len2;i++)
		b[i]=e[len2-i-1]-'0';
	if(len1>len2)
		len=len1;
	else
		len=len2;
	for(i=0;i<len;i++)
	{
		c[i]=a[i]+b[i];
	}
	for(i=0;i<len;i++)
	{
		if(c[i]>9)
		{
			c[i+1]+=c[i]/10;
			c[i]%=10;
		}
	}
         for(i=len;i>=0;i--)
		 {
  	         if(c[i])
              {
		         printf("%d",c[i]);
                           break;         
              }
			 if(i==0)
				 printf("0");
		 }
			 
	for(i--;i>=0;i--)
		printf("%d",c[i]);
	return 0;
}
