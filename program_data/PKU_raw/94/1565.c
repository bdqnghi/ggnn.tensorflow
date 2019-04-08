int main(){
	int a[500],b[500],n,i,m,zonghe=0,e;
	char x;
	x=',';
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2!=0){
			zonghe++;
		}else{
			a[i]=0;
		}
	}
	for(m=0;m<n;m++){
		for(i=0;i<n;i++){
			if(a[i]!=0){
				b[m]=a[i];
				a[i]=0;
				break;
			}
		}
	}
	for(m=0;m<zonghe;m++){
		for(i=0;i<zonghe-1;i++){
			if(b[i]>b[i+1]){
				e=b[i+1];
				b[i+1]=b[i];
				b[i]=e;
			}
		}
	}
	for(m=0;m<zonghe-1;m++){
		printf("%d%c",b[m],x);
	}
	if(m==zonghe-1){
		printf("%d",b[m]);
	}
return 0;
}