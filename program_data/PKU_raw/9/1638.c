int main()
{
	int n,age[100],i,j;
	char id[100][10];
	scanf("%d",&n);
	int k=0;
	char shuchu[100][10];
	for(i=0;i<n;i++)
	{
		scanf("%s %d",id[i],&age[i]);
		if(age[i]<60)
			strcpy(shuchu[k++],id[i]);
	}
	char mid[100][10];
	int t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(age[j]<age[j+1])
			{
				t=age[j];
				age[j]=age[j+1];
				age[j+1]=t;
				strcpy(mid[j],id[j]);
				strcpy(id[j],id[j+1]);
				strcpy(id[j+1],mid[j]);
			}
		}
	}
	if(age[0]<60)
		goto E;
	else
	{
		for(i=0;age[i]>=60;i++)
			printf("%s\n",id[i]);
	}
E:;	
	for(i=0;i<k;i++)
		printf("%s\n",shuchu[i]);
	return 0;
}