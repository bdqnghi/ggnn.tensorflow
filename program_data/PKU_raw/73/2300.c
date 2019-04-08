int main(){
	int a[6][6]={0};
	int s,t,x,y,q,m,n,i,j,r;
	q=0;
	for (i=1;i<=5;i++){
		for (j=1;j<=5;j++){
		scanf ("%d",&a[i][j]);
		}
	}
	for (r=1;r<6;r++){
	m=a[1][r];
	for (i=1;i<6;i++){
		if (a[i][r]<=m){
		m=a[i][r];
		s=i;
		}
	}
	for (i=s;i<s+1;i++){
	n=a[s][1];
		for (j=1;j<6;j++){
			if (a[s][j]>=n){
			n=a[s][j];
			y=j;
			}
	}
	
		if (y==r) {
		printf ("%d %d %d",s,y,a[s][y]);
		q=1;
		}
	}
	}

	if (q==0)
	{printf ("not found");}
return 0;
}
