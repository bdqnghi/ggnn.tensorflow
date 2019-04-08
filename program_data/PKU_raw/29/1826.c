int main()
{
	int m,n[100],i,j;
	float s,r[100];
	scanf("%d",&m);
	for(i=1;i<=m;i++){
		scanf("%d",&n[i]);
	}
	for(i=1;i<=m;i++){
		r[i]=0;
		s=1.0;
			for(j=1;j<=n[i];j++){
				
					s=1.0+1.0/s;
					r[i]=r[i]+s;
			}
			printf("%.3f\n",r[i]);
	}
	return 0;
}