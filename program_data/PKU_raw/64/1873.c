int main()
{
	int a,c,k,i,m,j,n,x[101],y[101],z[101],xs[101],ys[101],zs[101],xz[101],yz[101],zz[101];
	double b,l[10][10],ls[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&x[i],&y[i],&z[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			l[i][j]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));
		}
	}
	a=0;
	 for(i=0;i<n;i++){
  		for(j=i+1;j<n;j++){
  			xs[a]=x[i];
  			ys[a]=y[i];
  			zs[a]=z[i];
  			xz[a]=x[j];
  			yz[a]=y[j];
  			zz[a]=z[j];
  			ls[a]=l[i][j];
  			a++;
  			m=a;
  		}
	 }
	  k=0;
 while(k<=m){
  	for(i=0;i<m-1;i++){
  		if(ls[i]>=ls[i+1]){
  		ls[i]=ls[i];
  		ls[i+1]=ls[i+1];
  		}else{
  		b=ls[i];
  		ls[i]=ls[i+1];
  		ls[i+1]=b;
  		c=xs[i];
  		xs[i]=xs[i+1];
  		xs[i+1]=c;
  		c=ys[i];
  		ys[i]=ys[i+1];
  		ys[i+1]=c;
  		c=zs[i];
  		zs[i]=zs[i+1];
  		zs[i+1]=c;
  		c=xz[i];
  		xz[i]=xz[i+1];
  		xz[i+1]=c;
  		c=yz[i];
  		yz[i]=yz[i+1];
  		yz[i+1]=c;
  		c=zz[i];
  		zz[i]=zz[i+1];
  		zz[i+1]=c;
  		}
  	}
  	k++;
 } 
 for(i=0;i<m;i++){
 	 printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",xs[i],ys[i],zs[i],xz[i],yz[i],zz[i],ls[i]);
 }
 return 0;
}
  
  
