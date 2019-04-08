int main()
{
	int n,i,k,m,p,t,zong;
	double ju;
	int a[100],b[100],c[100],xe[100],f[100],g[100],h[100],l[100],he[100];
	double juli[100];
	scanf("%d",&n);
		for(i=0;i<n;i++){
    scanf("%d%d%d",&a[i],&b[i],&c[i]);
		}
	k=0;
	 int x;	
	 for(m=0;m<n;m++){
		for(p=m+1;p<n;p++){

x=(a[m]-a[p])*(a[m]-a[p])+(b[m]-b[p])*(b[m]-b[p])+(c[m]-c[p])*(c[m]-c[p])	;		
 juli[k]=sqrt(x);
  xe[k]=a[m];
	  f[k]=b[m];
	  g[k]=c[m];
  h[k]=a[p];
	  l[k]=b[p];
	  he[k]=c[p];
  k++;
		}
	}
zong=n*(n-1)/2;
			for(i=0;i<zong;i++){
				for(k=0;k<zong-i-1;k++){
					if(juli[k]<juli[k+1]){
						ju=juli[k];	
						juli[k]=juli[k+1];
						juli[k+1]=ju;
						t=xe[k];	
						xe[k]=xe[k+1];
						xe[k+1]=t;
						t=f[k];	
						f[k]=f[k+1];
						f[k+1]=t;
						t=g[k];	
						g[k]=g[k+1];
						g[k+1]=t;
                    	t=he[k];	
						he[k]=he[k+1];
						he[k+1]=t;
	                	t=h[k];	
						h[k]=h[k+1];
						h[k+1]=t;
						t=l[k];	
						l[k]=l[k+1];
						l[k+1]=t;
					}
				}
			}
		for(i=0;i<zong;i++){
printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",xe[i],f[i],g[i],h[i],l[i],he[i],juli[i]);
		}
		return 0;
	}
