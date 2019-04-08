void main()
{
	int a[301]={0},i=0,j,max,max2=0;
	char c;
	scanf("%d",&a[0]);
	max=a[0];

	while((c=getchar())!='\n')
	{
		scanf("%d",&a[++i]);
		
		if(max<a[i]){max2=max;max=a[i];}
		else if(max2<a[i]&&a[i]!=max)max2=a[i];
	}
	if(max>max2&&max2!=0)printf("%d\n",max2);
	else printf("No\n");
}