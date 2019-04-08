
int main()
{
	int n,k,i,j,m=0,z;
	scanf("%d %d",&n,&k);
	i=1;
	while(m!=n-1){
	z=i*(n-1);
	for(j=0;j<n-1;j++){
		if((z/(n-1)*n+k)%(n-1)==0){
		z=z/(n-1)*n+k;
		m+=1;
		}else{
			m=0;
			break;
		}
	}
	i++;
	}
	z=z/(n-1)*n+k;
	printf("%d",z);
	return 0;
}