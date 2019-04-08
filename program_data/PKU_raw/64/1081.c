int main(){
	int n,a[100][100],i,j,k,p,l,m=0,x,c[100][100],d[100][100],e2,e3,o,w=0;
	double b[100],e1;
	 scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
		   scanf("%d",&a[i][j]);
		}
	}
	for(p=1;p<=n;p++){
	    for(k=p-1;k<n-1;k++){
		   for(j=0;j<3;j++){
              x=a[p-1][j]-a[k+1][j];
		  
              m=m+x*x;
			 
			  c[w][j]=a[p-1][j];
			  d[w][j]=a[k+1][j];
			 


		   }
		b[w]=sqrt(m);
		w++;
		m=0;
	    
		}
	}
   o=n*(n-1)/2;
	for(l=1;l<=o;l++){
		for(k=0;k<o-l;k++){
			  if(b[k]<b[k+1]){
				  for(j=0;j<3;j++){
				e1=b[k];
				e2=c[k][j];
				e3=d[k][j];
				b[k]=b[k+1];
               c[k][j]=c[k+1][j];
                d[k][j]=d[k+1][j];
                  b[k+1]=e1;
                 c[k+1][j]=e2;
                 d[k+1][j]=e3;
			}
			}
		}
	}
	for(k=0;k<o;k++){
		printf("(");
		printf("%d,%d,%d",c[k][0],c[k][1],c[k][2]);
	    printf(")-(");
		printf("%d,%d,%d",d[k][0],d[k][1],d[k][2]);
		printf(")=");
		printf("%.2lf\n",b[k]);
	}
	return 0;
}
