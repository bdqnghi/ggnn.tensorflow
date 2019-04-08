int main(){
	int k,a[1000],i,j,n,t;
		scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);}
	for(i=0,t=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]+a[j]==k)
			{break;}}
		if(j!=n&&i!=j)
			t++;
}
	if(t>0)
	printf("yes"); 
	else
		printf("no"); 

 	return 0;
	}
