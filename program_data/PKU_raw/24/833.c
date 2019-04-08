void main()
{
	char a[1000];
	int i,j,k=1,mid;
	int b[60],c[60],d[60];
	b[0]=0;
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==' ')
		{
			b[k]=i;k++;
		}
	}
	b[k]=strlen(a);
	c[0]=b[1]-b[0];
	for(i=1;i<k;i++)c[i]=b[i+1]-b[i]-1;
	for(i=0;i<k;i++)d[i]=c[i];
	for(i=0;i<k-1;i++)
	for(j=0;j<k-1-i;j++)
	{
		if(c[j]>c[j+1])
		{
			mid=c[j];c[j]=c[j+1];c[j+1]=mid;
		}
	}
	if(d[0]==c[k-1])
	{
		for(i=0;i<b[1];i++)printf("%c",a[i]);
	}
	else
	{
	    for(i=1;i<k;i++)
	    {
		    if(d[i]==c[k-1])
		    {
			    for(j=b[i]+1;j<b[i+1];j++)printf("%c",a[j]);
			    break;
		    }
	    }
	}
	printf("\n");
	if(d[0]==c[0])
	{
		for(i=0;i<b[1];i++)
		printf("%c",a[i]);
	}
	else
	{
		for(i=1;i<k;i++)
	    {
		    if(d[i]==c[0])
		    {
			    for(j=b[i]+1;j<b[i+1];j++)printf("%c",a[j]);
			    break;
		    }
	    }
	}
}
		
	