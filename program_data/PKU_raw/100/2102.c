int main(){
	char a[300],b[100];
	int flag=0,i,k,len,c[52]={0};
	gets(a);
	len=strlen(a);
	b[0]='A';b[26]='a';
	for(i=1;i<26;i++){
	b[i]=b[i-1]+1;}
	for(i=27;i<52;i++){
	b[i]=b[i-1]+1;}
	for(i=0;i<52;i++){
		for(k=0;k<len;k++){
			if(b[i]==a[k]){
		c[i]++;flag=1;
			}
	}
	}
	if(flag==0){printf("No\n");}
	else{
	for(i=0;i<52;i++){
	if(c[i]!=0){
		printf("%c=%d\n",b[i],c[i]);
	}}
	}
return 0;}
