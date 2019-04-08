int main()
{
	char a[150],b[150];
	int c[150],d[150],result[150];
	int n,la,lb,i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		scanf("%s",b);
		la=strlen(a);
		lb=strlen(b);
		for(j=0;j<la;j++)
			c[j]=a[j]-'0';
		for(j=0;j<la-lb;j++)
			d[j]=0;
		for(j=la-lb;j<la;j++)
			d[j]=b[j-la+lb]-'0';

		int carry = 0;
		for(j=la-1;j>=0;j--)
		{
			if(c[j]>=d[j]+carry)
			{
				result[j]=c[j]-d[j]-carry;
				carry = 0;
			}
			else 
			{
				//c[j-1]=c[j-1]-1;
				
				result[j]=c[j]+10-d[j]-carry;
				carry = 1;
			}
		}
		for(j=0;j<la;j++)
		{
			if(result[j]!=0) break;
		}
		for(k=j;k<la-1;k++)
			printf("%d",result[k]);
		printf("%d\n",result[la-1]);
	}
	return 0;
}