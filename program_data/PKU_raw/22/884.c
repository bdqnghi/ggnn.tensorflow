int main()
{
	int i,a[300],n=-2,p=-2;
	for(i=0;i<=299;i++)
		a[i]=-100;
	scanf("%d",&a[0]);
	for(i=1;i<=299;i++)
	scanf(",%d",&a[i]);
	for(i=0;i<=299;i++){
		if(a[i]>n){
			p=n;
			n=a[i];}
		if(a[i]>p&&a[i]<n)
			p=a[i];
	}
	if(p==-2)
		printf("No\n");
	else
		printf("%d\n",p);
	return 0;
}