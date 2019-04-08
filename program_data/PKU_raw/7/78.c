int main(){
	int i,j,t=0;
	char str[260],sub[20],rep[20];
	scanf("%s%s%s",str,sub,rep);
	for(i=0;i<strlen(str);i++){
		if(str[i]==sub[0]){
			for(j=i+1;j<i+strlen(sub);j++){
				if(str[j]!=sub[j-i]){
					t=1;
				}
			}
			if(t==0){
				for(int k=i;k<i+strlen(sub);k++){
					str[k]=rep[k-i];
				}
				break;
			}
		}
		
	t=0;
	}
	printf("%s",str);
	return 0;
}