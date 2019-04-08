int main()
{
	int n,i,j,k,a[20000],b=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	printf("%d",a[0]);
	for(j=1;j<n;j++){
		for(k=0;k<=j;k++){
	if(a[k]!=a[j])b++;
		}
		if(b==j)printf(" %d",a[j]);
		b=0;
	}
	return 0;

}