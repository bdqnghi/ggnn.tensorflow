void main()
{
	char string[300],c;
	int sum[200]={0},i,j,k=0;
	gets(string);
	for(i=0;(c=string[i])!='\0';i++)
	{	for(j=65;j<=90;j++)
			if(c==j) sum[j]+=1;
		for(j=97;j<=122;j++)
			if(c==j) sum[j]+=1;
	}
	for(i=65;i<=122;i++)
		if(sum[i]!=0)
		{	printf("%c=%d\n",i,sum[i]);
		    k=1;
		}
	if(k==0) printf("No");
}