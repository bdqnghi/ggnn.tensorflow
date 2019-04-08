int main()
{
	int a[100];
	int n,first=0,second=0,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(first<a[i]){
			first=a[i];
		}
		else
		{
			first=first;
		}
	}
	for(i=0;i<n;i++){
		if(second<a[i]&&a[i]!=first){
			second=a[i];
		}
		else
		{
			second=second;
		}
	}
	printf("%d\n",first);
	printf("%d\n",second);
	return 0;
}
