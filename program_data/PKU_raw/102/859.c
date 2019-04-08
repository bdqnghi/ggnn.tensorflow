int main(){
	char a[45][10];
	float b[45],f[45],m[45],e;
	int n,k,i;
	int x=0,y=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %f",a[i],&b[i]);
		if(a[i][0]=='m'){
			m[y]=b[i];
			y++;
		}
		if(a[i][0]=='f'){
			f[x]=b[i];
			x++;
		}
	}
	for(k=1;k<=y;k++){
		for(i=0;i<y-k;i++){
			if(m[i]>m[i+1]){
				e=m[i+1];
				m[i+1]=m[i];
				m[i]=e;
			}
		}
	}
	for(i=0;i<y;i++){printf("%.2f ",m[i]);}
	for(k=1;k<=x;k++){
		for(i=0;i<x-k;i++){
			if(f[i]<f[i+1]){
				e=f[i+1];
				f[i+1]=f[i];
				f[i]=e;
			}
		}
	}
	for(i=0;i<x-1;i++){printf("%.2f ",f[i]);}
	printf("%.2f",f[x-1]);
	return 0;
}