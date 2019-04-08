int main(int argc, char* argv[])
{
	int m,n,i,j,t,a,b,s=0;
	scanf("%d,%d",&m,&n);
	int num[8][8],max;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&num[i][j]);
		}
	}
	for(i=0;i<m;i++){
		t=0;max=0;
		for(j=0;j<n;j++){
			if(num[i][j]>max){
				max=num[i][j];
				b=j;
            }
        }
		for(a=0;a<m;a++){
		    if(a!=i&&max<num[a][b])
		       t+=1;
        }
		if(t==m-1){
		printf("%d+%d",i,b);
		s=1;}
	}
	if(s==0)
	printf("No"); 
	return 0;
}