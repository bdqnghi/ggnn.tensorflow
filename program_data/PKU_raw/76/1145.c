int main(){
int k,i,m,l,p=0,q,x,e,n,d,s;
int a[50000],b[50000],c[50000],g[50000],r[50000];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d %d",&a[i],&b[i]);
}
for(i=0;i<n;i++){
g[i]=a[i];
r[i]=b[i];
}
for(k=1;k<=n;k++){
	for(i=0;i<n-k;i++){
		if(g[i]>g[i+1]){
		e=g[i+1];
		g[i+1]=g[i];
		g[i]=e;
		}
	}
}
d=g[0];
for(k=1;k<=n;k++){
	for(i=0;i<n-k;i++){
		if(r[i]<r[i+1]){
		m=r[i+1];
		r[i+1]=r[i];
         r[i]=m;
		}
	}
}
x=r[0];
for(i=g[0];i<=r[0];i++){
	c[i]=1;
} 
for(i=0;i<n;i++){
	for(q=a[i];q<=b[i];q++){
		c[q]=c[q]-1;
	}
}
for(i=0;i<n;i++){
	if((c[a[i]]>=0&&a[i]!=g[0])||(c[b[i]]>=0&&b[i]!=r[0])){
		
	p=p+1;
	}
}

if(p>0){
printf("no");
}else{

	printf("%d %d",d,x);
}
return 0;
}