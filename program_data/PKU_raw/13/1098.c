void main()
{
	int n,i;
	int a[20005],mark[100]={0},print=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",a+i);
	for(i=0;i<n;i++){
		if(mark[a[i]]==1)continue;
		else{
			if(print)printf(" ");
			printf("%d",a[i]);
			print=1;
			mark[a[i]]++;
		}
	}
	putchar(10);
}
