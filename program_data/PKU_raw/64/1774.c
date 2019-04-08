int main(){
	int n,a[30],b[45],c[45],p=0,e,q,g,i,t,k,s,x,h,j,v;
	double dis[45],mid;
	scanf("%d",&n);
    for(i=0;i<(3*n);i++){
          scanf("%d",&a[i]);
	}
	for(t=0;t<n;t++){
		for(k=t+1;k<n;k++){
		 b[p]=t;c[p]=k;
          e=(a[3*t]-a[3*k])*(a[3*t]-a[3*k])+(a[3*t+1]-a[3*k+1])*(a[3*t+1]-a[3*k+1])+(a[3*t+2]-a[3*k+2])*(a[3*t+2]-a[3*k+2]);
		  dis[p]=sqrt(e);
			  p++;
		}
	}
	for(s=1;s<=p;s++){
		for(x=0;x<p-s;x++){
			if(dis[x]<dis[x+1]){
              mid=dis[x+1];
			  dis[x+1]=dis[x];
			  dis[x]=mid;
			  q=b[x+1];
			  b[x+1]=b[x];
             b[x]=q;
             g=c[x+1];
			 c[x+1]=c[x];
			 c[x]=g;
			}
		}
	}
	for(h=0;h<p;h++){
        j=3*b[h];v=3*c[h];
		
       printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",a[j],a[j+1],a[j+2],a[v],a[v+1],a[v+2],dis[h]);
	}
	return 0;
}
