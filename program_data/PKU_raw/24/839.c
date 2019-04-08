int main()
{
	int i,k=0,max=0,min=100,max1,min1;
	char a[500];
	int b[500]={-1},c[500];
	gets(a);
	for(i=0;i<500;i++)
	{
		if(a[i]==' ')
		{
			k++;
			b[k]=i;
		}
		
		
	}
	for(i=0;i<500;i++)
	{
		if(a[i]=='\0')
		{
			k++;
			b[k]=i;
			break;
		}
	}
	
	

	c[0]=b[1];
	
	for(i=1;i<=k;i++)
		c[i]=b[i+1]-b[i]-1;
	for(i=0;i<k;i++)
	{
		if(c[i]>max)
		{
			max=c[i];
			max1=i;
		}
		if(c[i]<min)
		{
			min=c[i];
			min1=i;
		}
	}
	
	for(i=b[max1]+1;i<b[max1+1];i++)
		printf("%c",a[i]);
	printf("\n");
	for(i=b[min1]+1;i<b[min1+1];i++)
		printf("%c",a[i]);
	return 0;
	
	
}