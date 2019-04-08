
void main()
{
	char a[200][20],temp;
	int i,n,l[200]={0};
	int min,max;
	for(i=0;i<200;i++)
	{
		scanf("%s%c",a[i],&temp);
		l[i]=strlen(a[i]);
		if(temp=='\n') {n=i+1;break;}
	}
	min=max=0;
	for(i=0;i<n;i++)
	{
		if(l[i]>l[max]) max=i;
		if(l[i]<l[min]) min=i;
	}
	printf("%s\n",a[max]);
	printf("%s\n",a[min]);
}
