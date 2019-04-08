int main()
{
	int n;
	scanf("%d",&n);

	int sz[100][100];

	for(int row=0;row<n;row++){
		for(int col=0;col<n;col++){
			scanf("%d",&sz[row][col]);
		}
	}

	int a1=100,b1=100,a2=0,b2=0;

	for(int r=0;r<n;r++){
		for(int c=0;c<n;c++){
			if(sz[r][c]==0){
				a1=r;
				b1=c;
				break;
			}
		}
		if(a1!=100||b1!=100){
			break;
		}
	}

	for(int rr=n-1;rr>=0;rr--){
		for(int cc=n-1;cc>=0;cc--){
			if(sz[rr][cc]==0){
				a2=rr;
				b2=cc;
				break;
			}
		}
		if(a2!=0||b2!=0){
			break;
		}
	}

	int s;
	s=(a2-a1-1)*(b2-b1-1);

	printf("%d",s);

	return 0;
}