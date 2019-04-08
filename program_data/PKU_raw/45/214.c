void main()
{
	int i,j,k,l1,l2,word;
	char a[100],b[100],c[100];
	scanf("%s %s",a,b);
	l1=strlen(a);
	l2=strlen(b);
	for(i=0;i<=l2-l1;i++)
	{
		for(j=0;j<l1;j++)
			c[j]=b[j+i];
		for(k=0;k<l1;k++)
		{
			
		    if(c[k]==a[k])
			{word=1;continue;}
			else
			{word=0;break;}
		   
		} 
		if(word==1)
			{
			printf("%d",i);
			break;
		}
	}
}

	
