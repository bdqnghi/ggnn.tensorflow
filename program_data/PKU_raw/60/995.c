
int y(int x)
{
	int i,m=0;
	for(i=1;i<sqrt(x);i++){
		if(x%i==0)
			m++;
	}
	m=m*2;
	if(x%i==0)
		m++;
	return m;
}
int main(int argc, char* argv[])
{
	int a=0,i,n;
	scanf("%d",&n);
	for(i=1;i<n-1;i+=2){
		if(y(i)==2&&y(i+2)==2){
			printf("%d %d\n",i,i+2);
			a++;
		}
	}
	if(a<1)
		printf("empty");
	return 0;
}