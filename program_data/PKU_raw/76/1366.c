int main(){
	int n,a[50000]={0},b[50000]={0},c[10003]={0};
	int i,max,min,k,s=0,t;
	scanf("%d",&n);
	scanf("\n%d%d",&a[0],&b[0]);
	int t1=a[0],t2=b[0];
	for(i=1;i<n;i++){
	scanf("\n%d%d",&a[i],&b[i]);
	if(a[i]<t1){
		t1=a[i];
	}
	if(b[i]>t2){
		t2=b[i];
	}
	}
	for(i=0;i<n;i++){

      for (k=a[i]*2;k<=b[i]*2;k++){
	  c[k]=1;
	  }
	}
	for(k=0;k<10001;k++){
	s+=c[k];
	}
	if((t2-t1+1)*2-1!=s){
	printf("no");
	}else{
	printf("%d %d",t1,t2);
	}

return 0;
}