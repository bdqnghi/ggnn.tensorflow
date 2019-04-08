int main(){
    int n,i,j,k,m,q;
    j=0;
    scanf("%d",&n);
    int a[10],b[10],c[10],f[50],g[50],h[50],l[50],o[50],p[50];
    double d[50];
    double e;
    for(i=0;i<n;i++){
           scanf("%d %d %d",&a[i],&b[i],&c[i]);
    }
    for(i=0;i<n;i++){
           for(m=i+1;m<n;m++){
                    e=(a[i]-a[m])*(a[i]-a[m])+
                      (b[i]-b[m])*(b[i]-b[m])+
                      (c[i]-c [m])*(c[i]-c[m]);
                      d[j]=sqrt(e);
                      f[j]=a[i];
                      g[j]=b[i];
                      h[j]=c[i];
                      l[j]=a[m];
                      o[j]=b[m];
                      p[j]=c[m];
                      j=j+1;
           }       
    }         
    for(k = 1 ; k <= j ; k++){
         for(i = 0; i < j- k; i++){
			if(d[i] < d[i+1]){
			     e = d[i+1];
			     d[i+1] = d[i];
			     d[i] = e;
                   	     q= f[i+1];
			     f[i+1] = f[i];
			     f[i] = q;
                 	              q= g[i+1];
			     g[i+1] = g[i];
			     g[i] = q;
                                q= h[i+1];
			     h[i+1] = h[i];
			     h[i] = q;
                                q= l[i+1];
			     l[i+1] = l[i];
			     l[i] = q;
                	              q= o[i+1];
			     o[i+1] = o[i];
		              o[i] = q;
                   	     q= p[i+1];
			     p[i+1] =p[i];
			     p[i] = q;
			}
	}
    }
    for(i=0;i<j;i++){
                printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",f[i],g[i],h[i],l[i],	               o[i],p[i],d[i]); 
    }
	return 0;
}

