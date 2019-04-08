int main()
{
	int m,i,j;
	scanf("%d",&m);
	int z[1000];
    double p[1000],n[1000],s[1000];
	for(i=0;i<m;i++){
		scanf("%d",&z[i]);}
	for(i=0;i<m;i++){p[1]=1;n[1]=2;s[i]=0;
	if(z[i]==1){s[i]=2.000;printf("%.3lf\n",s[i]);}
	else if(z[i]>=2){
		for(j=2;j<=z[i];j++){
			p[j]=n[j-1];
			n[j]=p[j-1]+n[j-1];
			s[i]+=n[j]/p[j];
			if(j==z[i]){printf("%.3lf\n",s[i]+2);}}}}
	return 0;
}