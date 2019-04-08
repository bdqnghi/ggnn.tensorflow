int main(){
	int n,i,j,k,m,l,min,max,d=1;
	int a[50001],b[50001];
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);}
	  for(k=1;k<=n;k++){
		for(j=0;j<n-k;j++){
			if(a[j]>a[j+1]){
				m=a[j];
				l=b[j];
				a[j]=a[j+1];
				b[j]=b[j+1];
				a[j+1]=m;
				b[j+1]=l;
			}
		}
	  }
	  min=a[0],max=b[0];
    for (i=0;i<n-1;i++){
		if (max<a[i+1]){
			printf("no");
          d=0;
		break ;}
	else if(max<b[i+1]){
		max=b[i+1];}
}
	if(d==1){printf("%d %d",min ,max);}
	return 0;
} 
