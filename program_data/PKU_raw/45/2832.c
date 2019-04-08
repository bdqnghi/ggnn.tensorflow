
int main(){
	int n,i,j,k,t,len;
	char s[50];
	char w[50];
	scanf("%s%s",s,w);
	k=0;
	int ans;
	len=strlen(s);
	while(1){
		ans=1;
		for(i=0;i<len;i++){
			if (s[i]!=w[i+k]){
				ans=0;
			}
		}
		if(ans==1){
			break;
		}
		k++;
	}
	printf("%d",k);
	
	
	return 0;


}