int main()
{
	int n;
	char a[1000]="";
	char b[500][5]={""};
	int count[500]={0};
	int i;
	int j;
	int k=0;
	scanf("%d\n",&n);
	gets(a);
	int s;
	s=strlen(a);
	for(i=0;i<s-n+1;i++)
	{
		for(j=0;j<n;j++)
			b[k][j]=a[i+j];
		k++;
	}
	for(i=0;i<k;i++)
	  for(j=i;j<k;j++)
		  if(strcmp(b[i],b[j])==0)  
			  count[i]++;
	int max=0;
	for(i=0;i<k;i++)
		if(count[i]>=max)  max=count[i];
	if(max==1)printf("NO");
	else{
	printf("%d\n",max);
	for(i=0;i<k;i++)
	{if(count[i]==max) 
	puts(b[i]);
	}}
	return 0;
}