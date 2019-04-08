int main(){
	int i,n;
	scanf("%d",&n);
	int a[100],b[100];
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	int c[100];
	for(i=0;i<n;i++){
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90){
			c[i]=1;
		}else{
			c[i]=0;
		}
	}
	int t=0,q=0;
	int d[100]={0};
	for(i=0;i<n;i++){
		if(c[i]==1){
			t++;
		}
		if((c[i]!=c[i+1]||i==n-1)&&c[i]!=0){
			d[q]=t;
			q++;
			t=0;
		}
	}
	int w=d[0];
	for(i=0;i<q;i++){
		if(w<d[i]){
			w=d[i];
		}
	}
	printf("%d",w);
	return 0;
}