void main()
{
    char a[1000];
	int b[50],i,j=0,c,d[50],max=0,min=1000,k;
	gets(a);
	c=strlen(a);
	b[0]=0;
	for(i=0;i<c;i++)
		if(a[i]==' ')
		{
			j++;
			b[j]=i+1;
		}
		b[j+1]=c+1;
	for(i=0;i<j+1;i++)
	{
		d[i]=b[i+1]-b[i]-1;
		max=(max>=d[i])?max:d[i];
		min=(min>=d[i])?d[i]:min;
	}
	for(i=0;i<j+1;i++)
	{
		if(d[i]==max)
		{
			for(k=b[i];k<b[i+1]-1;k++)
				printf("%c",a[k]);
				break;
		}		
	}
	printf("\n");
	for(i=0;i<j+1;i++)
	{
		if(d[i]==min)
		{
			for(k=b[i];k<b[i+1]-1;k++)
				printf("%c",a[k]);
				break;
		}			
	}
}