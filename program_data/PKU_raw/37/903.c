int main()
{
	char c[100][10000],s[26];
	int t,i,j,k,len,num,n[26];
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%s",c[i]);
	}
	for(i=0;i<t;i++){
		k=0;
		for(j=0;j<26;j++){
			n[j]=0;
		}
		len=strlen(c[i]);
		for(j=0;j<len;j++){
			num=c[i][j]-97;
			n[num]++;
		}
		for(j=0;j<len;j++){
			num=c[i][j]-97;
			if(n[num]==1){
				printf("%c\n",c[i][j]);
				k=1;
				break;
			}
		}
		if(k==0){
			printf("no\n");
		}
	}
	return 0;
}