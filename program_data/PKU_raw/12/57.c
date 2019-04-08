int main(int argc, char* argv[])
{
	int shu[number];
	int n,i,j;
	int k=0;
    scanf("%d",&shu[0]);
	for(n=0;shu[n]!=0;n++){
	scanf("%d",&shu[n+1]);
	}
	for(i=0;i<=n;i++){
		for(j=0;j<=n;j++){
			if(shu[i]==2*shu[j]){
			k++;
			}
		}
	}
	if(k!=0){
		k=k-1;
	printf("%d",k);
	}
	else printf("%d",k);
	return 0;
}