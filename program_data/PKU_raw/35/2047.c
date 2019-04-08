int main()
{
	int i,j,a,b,p[8][8],k,x,l=0;
	scanf("%d,%d",&a,&b);
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf("%d",&p[i][j]);
		}
	}
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			x=0;
			for(k=0;k<b;k++){
				if(p[i][j]>=p[i][k]){
					x++;
				}
			}
			if(x==b){
				x=0;
				for(k=0;k<a;k++){
					if(p[i][j]<=p[k][j]){
						x++;
					}
				}
				if(x==a){
					printf("%d+%d",i,j);
					l++;
				}
			}
		}
	}
	if(l==0){
		printf("No");
	}
	return 0;
}