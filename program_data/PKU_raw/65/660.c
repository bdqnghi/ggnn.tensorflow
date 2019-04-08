int main()
{
	int n,i,s[200],z[200],a,b;
	a=0;
	b=0;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d%d", &s[i], &z[i]);}
	for(i=0;i<n;i++){
		if(s[i]-z[i]==1) {
			b++;}
		if(s[i]-z[i]==2) {
			a++;}
		if(s[i]-z[i]==-1) {
			a++;}
		if(s[i]-z[i]==-2) {
			b++;}
	}
	if(b>a) {
		printf("B");}
	else {
		if(b<a) {
		   printf("A");}
		else  {
		printf("Tie");}
	}
	return 0;
}
