int main()
{
	int n,a=0,b;
	scanf("%d",&n);
	if(n==1){printf("End");}
	if(n>1){
	for(a=0;a=1;a=0){
		if(n%2!=0){b=n;n=n*3+1;
		printf("%d*3+1=%d\n",b,n);}      
		if(n%2==0){b=n;n=n/2;
		printf("%d/2=%d\n",b,n);}
		if(n==1){break;}}
	printf("End");}
return 0;
}
