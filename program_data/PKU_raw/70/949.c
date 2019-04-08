int main()
{
	int n,i,j;
	double s,a[10][2],x=0;
	cin>>n;
    for(i=0;i<n;i++){
		for(j=0;j<2;j++) cin>>a[i][j];}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			s=sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1]));
			if(s>x) x=s;}}
	printf("%.4f\n",x);
	return 0;
}

