int main(){
	int n,a[11],b[11],c[11],i,j,s,q,maxi=0,maxj=1;
	double d[90][90];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&a[i],&b[i],&c[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			s=(a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j])+(c[i]-c[j])*(c[i]-c[j]);
			d[i][j]=sqrt(1.0*s);
		}
	}
	for(q=0;q<n*(n-1)/2;q++){
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(d[i][j]>d[maxi][maxj]){
					maxi=i;
					maxj=j;
				}
			}
		}
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",a[maxi],b[maxi],c[maxi],a[maxj],b[maxj],c[maxj],d[maxi][maxj]);
		d[maxi][maxj]=0;
	}
	return 0;
}