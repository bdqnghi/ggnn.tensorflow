int main()
{
	int a[1000],i,n=1,max1=0,max2=0;
	scanf("%d",&a[0]);
	while (getchar()==',') scanf("%d",&a[n++]);
    for (i=0;i<n;i++) max1= a[i]>max1? a[i]:max1;
	for (i=0;i<n;i++) max2= (a[i]<max1 && a[i]>max2)? a[i]:max2;
	if (max2>0) printf("%d",max2);
	else printf("No");
	return 0;
}
