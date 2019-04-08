int main(){
	int t=0,s=0,m=0,a[MAX],b[MAX],i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	for(j=0;j<n;j++){
		if(a[j]==1&&b[j]==0)
			s++;
		else if(a[j]==1&&b[j]==2) 
			t++;
		else if(a[j]==1&&b[j]==1) 
			m++;
		else if(a[j]==0&&b[j]==1) 
			t++;
		else if(a[j]==0&&b[j]==2) 
			s++;
		else if(a[j]==0&&b[j]==0) 
			m++;
		else if(a[j]==2&&b[j]==0) 
			t++;
		else if(a[j]==2&&b[j]==1) 
			s++;
		else if(a[j]==2&&b[j]==2) 
			m++;
	}
	if(t>s)
		printf("A");
	else if(s>t)
		printf("B");
	else
		printf("Tie");
	return 0;
}
