int main(){
    int m;
	int n[1000],b[1000],i,j;
	double a[1000],s[1000];

	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&n[i]);
		for(j=3;j<=n[i]+1;j++){
			b[1]=1;
			b[2]=2;
			b[j]=b[j-1]+b[j-2];
		}
	}	
	
	for(i=0;i<=m;i++){
		for(j=1;j<=n[i];j++){
			a[j]=1.000*b[j+1]/b[j];
		}
	}
	for(i=0;i<=m;i++){
		s[i]=0;
	}

    for(i=0;i<=m;i++){
		for(j=1;j<=n[i];j++){
			s[i+1]+=a[j];
		}
	}

	for(i=1;i<=m;i++){
		printf("%.3lf\n",s[i]);
	}
	

	return 0;
}

