  int main()
{
  int n,i,q;
  scanf("%d", &n);
  int a[100];
  for(i=1;i<=n;i++){
	 scanf("%d", &a[i]);
  }
  for(q=n;q>1;q--){
  printf("%d", a[q]);
  printf(" ");
  }
  printf("%d", a[1]);
			return 0;
}