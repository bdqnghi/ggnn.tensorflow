
int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	int a,b,s=0;
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		if(a>b)
			s++;
		if(a<b)
			s--;
		if(a==2&&b==0)
			s=s-2;
		if(a==0&&b==2)
			s=s+2;
	}
	if(s==0)
		printf("Tie");
	if(s<0)
		printf("A");
	if(s>0)
		printf("B");
	return 0;
}