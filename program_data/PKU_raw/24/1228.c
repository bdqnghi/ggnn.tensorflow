int main()
{
	char a[500];
	char b[50][500];
	int  e,l,s;
	int i,n,m,sum;
	int len[50];
	gets(a);
	n=0;
	i=0;
	m=0;
	sum=0;
	while(a[n]!='\0')
	{
		if(a[n]!=' ')
		{
			b[i][m]=a[n];
			m+=1;
			n+=1;
		}else
		{
			b[i][m]='\0';
			m=0;
			n+=1;
			i+=1;
			sum+=1;
		}
	}
	b[i][m]='\0';

	for(i=0;i<=sum;i++)
	{
		 len[i]=strlen(b[i]);
	} 

	for(i=sum;i>0;i--)
	{
		for(m=0;m<i;m++)
		{
			if((len[m])>(len[m+1]))
			{
			   	e=len[m];
				len[m]=len[m+1];
				len[m+1]=e;
			}
		}
	}
	l=len[sum];
	s=len[0];

    for(i=0;i<=sum;i++)
	{

		if(strlen(b[i])==l)
		{
	        printf("%s\n",b[i]);
			break;
		}
	}
	for(i=0;i<=sum;i++)
	{
		if((strlen(b[i]))==s)
		{
        	printf("%s\n",b[i]);
			break;
		}
	}
	return 0;
}
