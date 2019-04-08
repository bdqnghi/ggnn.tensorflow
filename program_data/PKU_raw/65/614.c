int main () {
	int n,i,A=0,B=0;
	int a[200];
	int b[200];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d%d\n",&a[i],&b[i]);
	}
    for(i=0;i<n;i++){
		if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0))
		A++;
		else if((b[i]==0&&a[i]==1)||(b[i]==1&&a[i]==2)||(b[i]==2&&a[i]==0))
			B++;
	}
	if(A>B)
		printf("A");
	else if(A<B)
		printf("B");
  else
     printf("Tie");
     return 0;
}