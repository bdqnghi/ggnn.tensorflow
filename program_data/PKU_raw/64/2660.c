int main(){
	int n,m,t,i,j,x[15],y[15],z[15];
	double s[150],k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&x[i],&y[i],&z[i]);
	}
	t=0;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			s[t]=sqrt((1.0)*((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j])));
			t++;
		}
	}
	for(i=1;i<=t-1;i++){
		for(j=0;j<t-i;j++){
			if(s[j]<s[j+1]){
				k=s[j];
				s[j]=s[j+1];
				s[j+1]=k;
			}
		}
	}
	for(m=0;m<t;m++){
		if(s[m]==s[m+1]){
			continue;
		}else{
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(s[m]==sqrt((1.0)*(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]))){
					printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[i],y[i],z[i],x[j],y[j],z[j],s[m]);
				}
			}
		}
	}
	}
	return 0;
}
