int main () {
	char la[301];
	int sz[30]={0};
	char c;
	gets(la);
	int k;int l=0;
	int len=strlen(la);
		for(int i=0;i<=len-1;i++){
			k=la[i]-'a';sz[k]+=1;}
		for(int j=0;j<=25;j++){
			if(sz[j]==0){l++;}}
		if (l==26){printf("No");}
		else {for(int m=0;m<26;m++){
			c=97+m;if(sz[m]>0){
				printf("%c=%d\n",c,sz[m]);}}
		}
		return 0;
}

