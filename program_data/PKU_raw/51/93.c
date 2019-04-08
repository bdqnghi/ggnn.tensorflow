// ngram????.cpp : Defines the entry point for the console application.
//

int main(int argc, char* argv[])
{
	int max,mark[700],n,i,len,k,j,num[700];
	char sz[700],gram[700][10];
	scanf("%d",&n);
	scanf("%s",sz);
	len=strlen(sz);
/*	if(len==1){
		printf("1\n%s\n",sz);
		return 0;
	}
*/	for(i=0;i<len;i++){
		num[i]=1;
	}
	for(i=0;i<len-n+1;i++){
		for(j=0;j<n+1;j++){
			if(j!=n)gram[i][j]=sz[i+j];
			else gram[i][j]='\0';
		}
	}
	for(i=0;i<len-n+1;i++){
		for(j=i+1;j<len-n+1;j++){
			if(strcmp(gram[i],gram[j])==0) num[i]++;
		}
	}
	max=1;
	k=-1;
	for(i=0;i<len-n+1;i++){
		if(num[i]>max){
			max=num[i];
			k=0;
			mark[k]=i;
		}else if(num[i]==max&&max!=1){
			k++;
			mark[k]=i;
		}
	}
	if(k==-1)printf("NO\n");
	else{
		for(i=0;i<=k;i++){
			if(i==0)printf("%d\n%s\n",num[mark[0]],gram[mark[0]]);
			else printf("%s\n",gram[mark[i]]);
		}
	}
	return 0;
}

