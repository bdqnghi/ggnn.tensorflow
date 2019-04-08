int main(int argc, char* argv[])
{
	int n,i;
	scanf("%d",&n);
	int m[NUMBER];
	for(i=0;i<n;i++){
	scanf("%d",&m[i]);
	}
	int q;
	printf("%d",m[n-1]);
	for(q=n-2;q>=0;q--){
	printf(" %d",m[q]);
	}
	return 0;
}