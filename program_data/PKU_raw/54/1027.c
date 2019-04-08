int main()
{
	int k,n,n1;
	int apple(int n,int k);
	scanf("%d%d",&n,&k);
	printf("%d",apple(n,k));
	return 0;
}
int apple(int n,int k)
{
	int num,i,j;
	for(i=1;;i++){
		for(j=1;j<=n;j++){
			if(j==1)num=i*n+k;
			else{
				if(num%(n-1)==0){
					num=num/(n-1)*n+k;
					if(j==n)break;
				}
				else{j=0; break;}
			}
			if(j==n)break;
		}
		if(j==n)break;
	}
	return num;
}


