int num(int a,int n,int k,int m)
{
	if (m == n)
	{
		printf ("%d\n",a);
		exit(1);
	}
	if(m!=n){
		if(a%(n-1)!=0){
			return 1;
		}
		a=a*n/(n-1)+k;
		m++;
		num(a,n,k,m);
	}
	/*else if(m==n){
		printf("%d\n",a);
		return 2;
	}*/
}
int main(int argc, char* argv[])
{
	int a,n,k,m;
	int i,j=0;
	scanf("%d%d",&n,&k);
	for(i=1;;i++){
		a=i*(n-1);
		m=0;
		j=num(a,n,k,m);
		if(j==2){
			break;
		}
	}
	return 0;
}

