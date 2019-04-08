int main()
{
	int s[1000][1000],n,l=1000,q=1001,b=1001,x=1000,p,k,z,r;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&(s[i][j]));
			}
	}
	for(k=0;k<n;k++){
		if(l==q){
			break;
		}
		for(l=0;l<n;l++){
			if(s[k][l]==0){
				q=l;
				p=k;
				break;
			}
		}
	}
		for(int a=n-1;a>-1;a--){
		if(b==x){
			break;
		}
		for(b=n-1;b>-1;b--){
			if(s[a][b]==0){
				x=b;
				z=a;
				break;
			}
		}
	}
	r=(x-l-1)*(z-k);
	printf("%d",r);
	return 0;
}

