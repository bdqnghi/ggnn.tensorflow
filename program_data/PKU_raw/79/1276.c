int main()
{
	int i,j,k,a=0;
	int m[100],n[100];

	for(i=0;;i++){
		scanf("%d%d",&n[i],&m[i]);
		if(n[i]==0&&m[i]==0){
			break;
		}
		a++;
	}
	for(i=0;i<a;i++){
		k=0;
		for(j=2;j<=n[i];j++){
			k=((m[i]%j)+k)%j;
		}
		printf("%d\n",k+1);
	}

	return 0;
}
