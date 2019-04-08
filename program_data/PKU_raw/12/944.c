int main()
{
	int i,j,m,n,x;
	int sz[16];
	while(1)
	{
		x=0;
		for(i=0;i<16;i++){
			scanf("%d",&sz[i]);
			if(sz[i]==0||sz[i]==-1){
				break;
			}
		}
		if(sz[i]==-1){
			break;
		}
		for(m=0;m<=i-2;m++){
			for(n=m+1;n<=i-1;n++){
				if(sz[m]==2*sz[n]||sz[n]==2*sz[m]){
					x++;
				}
			}
		}
		printf("%d\n",x);
	}
	return 0;
}
