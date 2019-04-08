int f(int n,int min){
	int i,result=1;
	if(n<min)return 0;
	for(i=min;i<n;i++)
		if(n%i==0)result+=f(n/i,i);
	return result;
}
void main()
{
	int cases,a;
	scanf("%d",&cases);
	while(cases--){
		scanf("%d",&a);
		printf("%d\n",f(a,2));
	}
}