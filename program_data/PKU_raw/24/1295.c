void main()
{
	int i,j,k,max,min;
	char (*p)[30];
	int *q;
	q=(int *)malloc(100*sizeof(int));
	p=(char(*)[30])malloc(100*30*sizeof(char));
	for(i=0;scanf("%s",&p[i])!=EOF;i++)
	{
		q[i]=strlen(p[i]);
	}
	max=0;
	for(j=0;j<i;j++)
	{
		if(max<q[j])max=q[j];
	}
	for(j=0;j<i;j++)
	{
		if(max==q[j])
		{
			printf("%s\n",p[j]);
			break;
		}
	}
	min=max+1;
	for(j=0;j<i;j++)
	{
		if(min>q[j])min=q[j];
	}
	for(j=0;j<i;j++)
	{
		if(min==q[j])
		{
			printf("%s",p[j]);
			break;
		}
	}
}