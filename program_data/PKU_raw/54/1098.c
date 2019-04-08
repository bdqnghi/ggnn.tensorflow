
int f_1(int);
int f_2(int,int);

int main()
{
	int n,k,m;
	scanf("%d %d",&n,&k);
	if(f_1(n-1)>k)
		m=f_1(n)-f_2(n,k);
	else
		m=f_1(n)*n-f_2(n,k);
	printf("%d\n",m);
	return 0;
}

int f_1(int n)
{
	int i,output=1;
	for(i=0;i<n;i++){
		output *=n;
	}
	return output;
}

int f_2(int n,int k)
{
	int output;
	output=(n-1)*k;
	return output;
}