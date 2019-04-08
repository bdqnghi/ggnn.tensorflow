void main(){
	int n,k,i,j,ib=1;
	int a[1000];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
		if(ib){
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==k)
			{	printf("yes");
			ib=0;
			break;}
			if((i==n-2)&&(a[i]+a[j]!=k))
				printf("no");
		}}
}
	