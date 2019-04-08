void main(){
	int a[100];
	int m,i,max1,max2;
	scanf("%d",&m);
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	max1=a[0];
	for(i=0;i<m;i++)
		if(a[i]>max1)max1=a[i];
	max2=a[0];
	for(i=0;i<m;i++)
		if(a[i]>max2&&a[i]!=max1)
			max2=a[i];
	printf("%d\n%d",max1,max2);
}
		
	

