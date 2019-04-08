int main()
{
	int sz[1000][1000],n,i,j,a=0,b=1000,c=0,d=1000,x,y,s;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(sz[i][j]==0){
				if(i>a){
					a=i;
				}
				if(i<b){
					b=i;
				}

                if(j>c){
					c=j;
				}
				if(j<d){
					d=j;
				}
			}
		}
	}
	x=a-b-1;
	y=c-d-1;
	s=x*y;
	printf("%d",s);
	return 0;
}