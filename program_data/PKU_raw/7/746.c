int main(){
	int flag=1,i,n,m,j;
	char str[256],sub[256],rep[256];
	scanf("%s%s%s",&str,&sub,&rep);
	n=strlen(str);
	m=strlen(sub);
	for(i=0;i<n;i++){
		if(str[i]==sub[0]){
			flag=1;
			for(j=0;j<m;j++){
				if(str[i+j]!=sub[j]){
					flag=0;
					break;
				}
			}
			if(flag==1){
				for(j=0;j<m;j++){
					str[i+j]=rep[j];
				}
				break;
			}
		}
	}
	printf("%s",str);
	return 0;
}
