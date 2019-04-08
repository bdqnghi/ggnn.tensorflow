int main()
{
	int n,i;
	int c=0,d=0;
	int a[max],b[max];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
		if(a[i]==b[i]){
			c++;
		}
		else if(a[i]==0&&b[i]==1||a[i]==1&&b[i]==2||a[i]==2&&b[i]==0){
			d++;
		}
	}
	if(n-c<2*d){
		printf("A");
	}
	else if(n-c>2*d){
		printf("B");
	}
	else{
		printf("Tie");
	}



	return 0;
}