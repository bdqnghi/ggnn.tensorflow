int main(){
	int m,n[100],i,j;
	double h[100],s[100],z[100];
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&(n[i]));
		h[i]=0;
	}
	s[0]=1;
	s[1]=2;
	for(i=2;i<100;i++){
		s[i]=s[i-1]+s[i-2];
	}
	for(i=0;i<100;i++){
		z[i]=s[i+1]/s[i];
	}
	for(i=0;i<m;i++){
		for(j=0;j<n[i];j++){
			h[i]+=z[j];
		}
	}
	for(i=0;i<m;i++){
			printf("%.3lf\n",h[i]);
	}
	return 0;
}