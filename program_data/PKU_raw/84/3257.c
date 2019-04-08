
void main()
{
	int I,n,a[100],i,j,p;
	scanf("%d",&n);

	for(I=0;I<n;I++)
	scanf("%d",&a[I]);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			if(a[i]>a[j]){
				p=a[i];
				a[i]=a[j];
				a[j]=p;
			}
	}
	printf("%d\n%d\n",a[0],a[1]);
}