int main()
{
	int sushu(int n,int a[10000]);
	int n,i,array[10000],m,p;
	scanf("%d",&n);
	m=sushu(n,array);
	for(i=0,p=0;i<m;i++)
	{
		if(array[i]==array[i+1]-2) {printf("%d %d\n",array[i],array[i+1]);p++;}
	}
	if(p==0) printf("empty\n");
}
int sushu(int n,int a[10000])
{
	int i,j,number=0;
	for(i=3;i<=n;i=i+2)
	{
		for(j=3;j<=sqrt(i);j=j+2)
		{
			if(i%j==0){break;}
		}
		if(j>sqrt(i)) {number=number+1;a[number]=i;}
	}
	return(number++);
}