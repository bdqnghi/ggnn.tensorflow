int main()
{
	int n,a[20000],b[20000],i,j,r,t,s;
	scanf("%d",&n);
	s=1;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	b[0]=a[0];
	for(i=1;i<n;i++){
		t=0;
		for(j=0;j<i;j++){
			if(a[i]==a[j]){
				t++;
			}
		}
		if(t==0){
			b[s]=a[i];
			s++;
		}
	}
	for(r=0;r<s-1;r++){
		printf("%d ",b[r]);
	}
	printf("%d",b[s-1]);
	printf("\n");
	return 0;
}
