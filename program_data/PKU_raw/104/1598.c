

int I=0;

int root(int *a,int n)
{
	*(a+I)=n;
	I++;
	if(n!=1){
		if(n%2==0)
			root( a,n/2 );
		else
			root( a,(n-1)/2 );
	}
	return I;
}

void main()
{
	int a0,b0,a[MAX],b[MAX],m,n,i,j,flag=0;
	scanf("%d%d",&a0,&b0);
	m=root(a,a0);
	I=0;
	n=root(b,b0);
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if( *(a+i)==*(b+j) ){
				printf("%d\n",*(a+i));
				flag=1;
				break;
			}
		}
		if(flag)
			break;
	}
}