
int count;

void fun(int i, int j)
{
	int k;
	for(k=i; k<=sqrt(j); k++) {
		if(j%k == 0) {
			count++;
			fun(k,j/k);
		}
	}
}
int main()
{
     int N,turn,c;
      scanf("%d",&turn);
      for(c=1;c<=turn;c++)
      {
	int n,i;
	scanf("%d",&n);
	for(i=2; i<=sqrt(n); i++) {
		if(n%i == 0) {
			count++;
			fun(i,n/i);
		}
	}
	printf("%d\n",count+1);
	count=0;
}

}
