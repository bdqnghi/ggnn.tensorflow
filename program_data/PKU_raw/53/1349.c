int main(){
	int n,a[100],i,k,s;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++){
		for(k=i+1;k<=n;k++){
			if(a[k]==a[i]) a[k]=324235;
	}}
	k=0;
	for(i=1;i<=n;i++){
		if(a[i]!=324235)k+=1;
	}
	s=0;
	for(i=1;i<=n;i++){
		if(a[i]!=324235 && s==k-1){printf("%d",a[i]);break;}
		if(a[i]!=324235){printf("%d,",a[i]);
		s++;}
	}
	return 0;
}

