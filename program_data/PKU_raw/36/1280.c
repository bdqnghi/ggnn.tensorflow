int compare(const void*a,const void*b)
{
	return *(int*)b-*(int*)a;
}
	
void main()
{
	char s1[100],s2[100];
	scanf("%s %s",s1,s2);
	int k1=strlen(s1);
	int k2=strlen(s2);
	if(k1!=k2)
		printf("NO\n");
	else
	{
		int a1[100]={0},a2[100]={0};
	int i;
	for(i=0;i<k1;i++)
	{
		a1[i]=s1[i]-'0';
		a2[i]=s2[i]-'0';
	}
	qsort(a1,k1,sizeof(int),compare);
	qsort(a2,k1,sizeof(int),compare);
	int count=0;
	for(i=0;i<k1;i++)
	{
		if(a1[i]==a2[i])
			count++;
	}
	if(count==k1)
		printf("YES\n");
	else
		printf("NO\n");
	}
}

	


	
