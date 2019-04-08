int main(){
	int a[100]={1},b[100],c[100],d[100],e[100],f[100],s[100],p[100],q[100],v[100],i;
	for(i=1;a[i-1]!=0;i++){
		scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
	}
	for(i=1;a[i]!=0;i++){
	if(f[i]>=c[i]){
		p[i]=f[i]-c[i];
        if(e[i]>=b[i]){
		    q[i]=e[i]-b[i];
			v[i]=d[i]+12-a[i];
		}else{
		    q[i]=60-b[i]+e[i];
			v[i]=d[i]+12-a[i]-1;
		}
	}else{
		p[i]=60-c[i]+f[i];
		if((e[i]-1)>=b[i]){
		    q[i]=e[i]-b[i]-1;
			v[i]=d[i]+12-a[i];
		}else{
		    q[i]=60-b[i]+e[i]-1;	
			v[i]=d[i]+12-a[i]-1;
		}
	}
	s[i]=v[i]*60*60+q[i]*60+p[i];
	printf("%d\n",s[i]);
	}
	return 0;
}