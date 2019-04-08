int main(){
  int u=0,i,k,t,n,j,s,g,a[1000],b[1000],c[1000],e[1000],f[1000];
  double d[1000],m;
  scanf("%d",&n);
  for(i=0;i<n;i++){
     scanf("%d%d%d",&a[i],&b[i],&c[i]);
  }
  for(j=0;j<n-1;j++){
    for(i=j,t=j+1;t<n;t++){
      d[u]=sqrt(pow(a[i]-a[t],2)+pow(b[i]-b[t],2)+pow(c[i]-c[t],2));
	  e[u]=i;
	  f[u]=t;
	  u++;
	}
  }
  for(k=1;k<=u;k++){
    for(i=0;i<u-k;i++){
	  if(d[i]<d[i+1]){
	    m=d[i];
		d[i]=d[i+1];
		d[i+1]=m;
		s=e[i];
		e[i]=e[i+1];
		e[i+1]=s;
		g=f[i];
		f[i]=f[i+1];
		f[i+1]=g;
	  }
	}
  }
for(i=0;i<u;i++){
  printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",a[e[i]],b[e[i]],c[e[i]],a[f[i]],b[f[i]],c[f[i]],d[i]);
}  

return 0;
}