int main()
{
	int n;
	scanf("%d\n",&n);
	char art[8000];
	gets(art);
	int len;
	len=strlen(art);
	int i,j=0,k=0;
	char wor[200][40];
	for(i=0;i<len;i++){
		if(art[i]!=' '){
			wor[j][k]=art[i];
			k++;
		}else{
			wor[j][k]='\0';
			k=0;
			j++;
		}
	}
	wor[j][k]='\0';
	int sum=0;
	int a;
	int be=0,ed;
	for(i=0;i<n;i++){
		a=strlen(wor[i]);
		sum+=a+1;
		if(sum<=81){
			ed=i;
		}else{
			for(j=be;j<ed;j++){
				printf("%s ",wor[j]);
			}
			printf("%s\n",wor[ed]);
			be=i;
			sum=a+1;
		}
	}
	for(i=be;i<n-1;i++){
		printf("%s ",wor[i]);
	}
	printf("%s",wor[n-1]);
	return 0;
}
