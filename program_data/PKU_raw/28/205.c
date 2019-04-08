
int main()
{
	char a[3000];
	gets(a);
	int counter[300]={0};
	int i=0,j=0,t;
	while(a[i]!='\0')
	{
		if(a[i]!=' '&&a[i+1]!=' ')
		{
			counter[j]++;
			i++;
		}
		else if(a[i]!=' '&&a[i+1]==' ')
		{
			counter[j]++;
			j++;
			i++;
		}
		else
			i++;
	}
	for(t=0;t<j;t++)
		printf("%d,",counter[t]);
	printf("%d\n",counter[j]);
	return 0;
}