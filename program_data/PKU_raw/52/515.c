int main(int argc, char* argv[])
{
	int n,m,i;
	int s[50];
	scanf("%d %d\n",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	int *p;
	p=&s[n-1];
	for(i=0;i<m+n;i++){
		p++;
		*p=s[i];
	}	
	printf("%d",s[n-m]);
	for(i=n-m+1;i<2*n-m;i++){
		printf(" %d",s[i]);
	}
	return 0;
}

