int main()
{
	int n,i,j,a=0,c;
	int b[200][2];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++){
			c=b[i][0]-b[i][1];
			if(c==0)
				a=a;
			if(c==1||c==-2)
				a=a-1;
			if(c==-1||c==2)
				a=a+1;
	}
	if(a==0)
		printf("Tie");
	if(a>0)
		printf("A");
	if(a<0)
		printf("B");
	return 0;
}