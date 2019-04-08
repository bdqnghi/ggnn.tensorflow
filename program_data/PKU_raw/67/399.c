int main()
{
	double s[100][2];
	int i,j,n;
	double a,k,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++){
		   scanf("%lf",&s[i][j]);
	}}
	a=s[0][1]/s[0][0];
	for(i=1;i<n-1;i++){
		k=s[i][1]/s[i][0];
		if((k-a)>0.05){
			printf("better\n");}
		else if((a-k)>0.05){
			printf("worse\n");}
		else {
			printf("same\n");
	}}
	b=s[n-1][1]/s[n-1][0];
    if((b-a)>0.05){
			printf("better");}
		else if((a-b)>0.05){
			printf("worse");}
		else {
			printf("same");}
	return 0;
}
