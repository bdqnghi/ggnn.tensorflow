int main(){
	int x[10],y[10],z[10],n,i,j,c,maxi,maxj;
	float s[10][10],max;
	max=0.0f;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d",&x[i],&y[i],&z[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			s[i][j]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));
		}
	}
	for(c=0;c<(n*(n-1)/2);c++){
	    for(i=0;i<n-1;i++){
		    for(j=i+1;j<n;j++){
				if(s[i][j]>max){
					max=s[i][j];
					maxi=i;
					maxj=j;
				}
			}
		}
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",x[maxi],y[maxi],z[maxi],x[maxj],y[maxj],z[maxj],max);
		s[maxi][maxj]=0.0f;
		max=0.0f;
		maxi=i;
		maxj=j;
	}
	return 0;
}