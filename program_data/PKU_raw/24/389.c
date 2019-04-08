void main()
{
	char c[500],a[50][20];
	int b[50],i=0,t=0,j,min=20,max=0,count=0;
	gets(c);
	for(j=0;j<50;j++)
	{
		count=0;
	    for(i=t;i<20+t;i++)
		{
		    if(c[i]==' ' || c[i]=='\0')
			{
			    t=i+1;
				break;
			}
			else 
			{
				a[j][count]=c[i];
			    count++;
			}	
		}
		b[j]=count;
		if(c[i]=='\0')
			break;
	}
		  

	for(i=0;i<=j;i++)
	{
		if(b[i]>max)
			max=b[i];
		if(b[i]<min)
			min=b[i];
	}
	for(i=0;i<=j;i++)
	{
		if(b[i]==max)
		{
			for(t=0;t<b[i];t++)
				printf("%c",a[i][t]);
			printf("\n");
			break;
		}	
	}
	for(i=0;i<=j;i++)
	{
		if(b[i]==min)
		{
			for(t=0;t<b[i];t++)
				printf("%c",a[i][t]);
			break;		
		}
	}
}
