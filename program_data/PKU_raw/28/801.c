
void main()
{
	char a[10000]={'\0'};
	int n[300]={0},i,j=0,k;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=' ')
			n[j]++;
		else
			j++;
	}
	k=j;
	for(j=0;j<k;j++)
		if(n[j]!=0)
		    printf("%d,",n[j]);
	printf("%d\n",n[k]);
}