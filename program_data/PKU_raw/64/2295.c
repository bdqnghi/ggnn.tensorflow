int main(){
	int n,i,p,j,e,k,u;
	double s[50];
	int x[10],y[10],z[10];
	struct result{
           int x1,y1,z1,x2,y2,z2;
           double s;
        }a[50],t;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&x[i],&y[i],&z[i]);
	}    
	p=(n*(n-1))/2;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
                        e=(n-1.0*(i+1)/2)*i+j-i-1;
			u=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]);      
			s[e]=sqrt(1.0*u);
		}
	}
        
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
               e=(n-1.0*(i+1)/2)*i+j-i-1;
               a[e].x1=x[i];
               a[e].y1=y[i];
               a[e].z1=z[i];
               a[e].x2=x[j];
               a[e].y2=y[j];
               a[e].z2=z[j];
               a[e].s=s[e];
           }
        }
        for(k=1;k<=p;k++){
           for(i=0;i<p-k;i++){ 
               if(a[i].s<a[i+1].s){
                   t=a[i+1];
                   a[i+1]=a[i];
                   a[i]=t;
                }
           }
        }
        for(i=0;i<p;i++){       
               printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",a[i].x1,a[i].y1,a[i].z1,a[i].x2,a[i].y2,a[i].z2,a[i].s);
           
        }
   	return 0;
}