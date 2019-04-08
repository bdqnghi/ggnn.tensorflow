int main()
{
	int sz[1000];
	int t,i,n,m,a;
	scanf("%d",&n);
	for(a=1;a<=n;a++){
		scanf("%d",&m);
		for(i=0;i<m;i++){
			scanf("%d",&sz[i]);
		}
		if(m==0) t=60;
		else{
		for(i=0;i<m;i++){
			if(sz[i]+3*i>60){
				t=60-3*i;
				break;
			}
			if((sz[i]+3*i<=60)&&(sz[i]+3*i>=57)){
				t=sz[i];
				break;
			}
			if((sz[i]+3*i<60)&&(i==m-1)){
				t=60-3*(i+1);
			    break;
			}
		}
		}
		printf("%d\n",t);
	}
	return 0;
}
