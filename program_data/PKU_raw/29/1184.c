int main()
{
	int m,i,j,a[10000];
	double s[10000],sz[10000];
	scanf("%d",&m);
	for(i=0;i<m;i++){	
		scanf("%d",&(a[i]));
		s[i]=0;
 		for(j=2;j<=a[i]+1;j++){        	
			sz[0]=1;
			sz[1]=2;
			sz[j]=sz[j-1]+sz[j-2];
			s[i]+=sz[j-1]*1.0/sz[j-2];
		}
	}
	for(i=0;i<m;i++){
		printf("%.3lf\n",s[i]);
	}
	return 0;
}
