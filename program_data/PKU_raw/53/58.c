
void main()
{
	int i,j,n;
	int a[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("%d",a[0]);
	for(i=1;i<n;i++)
	{
		int c=0;
		j=i-1;
		while(j!=-1)
		{if(a[i]==a[j])c=c+1;j--;}
		if(c==0)printf(",%d",a[i]);
	}
}