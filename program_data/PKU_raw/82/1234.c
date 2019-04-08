int main()
{
	int n,i,j,k[100]={0};
	int a[99][2];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d",&a[i][0],&a[i][1]);
	for(i=0,j=0;i<n;i++)
		if(a[i][0]>=90&&a[i][0]<=140&&a[i][1]>=60&&a[i][1]<=90)
			k[j]++;
		else
			j++;
	for(i=0,j=k[0];i<100;i++)
		if(k[i]>j)
			j=k[i];
	printf("%d\n",j);
	return 0;
}