void jg(int);
int main()
{
	int n;
	scanf("%d",&n);
	jg(n);
}

void jg(int n)
{
	if (n==1) printf("End");
	else{
		if (n%2==0){
			printf("%d/2=%d\n",n,n/2);
			n = n/2;
		}
		else {
			printf("%d*3+1=%d\n",n,n*3+1);
			n = n*3+1;
		}
		jg(n);
	}
}
