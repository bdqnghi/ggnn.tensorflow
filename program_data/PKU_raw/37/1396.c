int main(){
	int t;
	char zfc[100000];
	int k,i,j;
	int len;
	int sum;
	char a;
	int std=0;
	scanf("%d",&t);
	for(k=1;k<=t;k++){
		std=0;
		scanf("%s",zfc);
        len=strlen(zfc);
		for(i=0;i<len;i++){
			if(zfc[i]=='0'){
				continue;
			}
			a=zfc[i];
			sum=1;
			for(j=i+1;j<len;j++){
				if(zfc[j]==a){
					sum++;
					zfc[j]='0';
				}
			}
			if(sum==1){
				printf("%c\n",a);
                std=1;
				break;
			}
		}
		if(std==0){
			printf("no\n");
		}
	}
	return 0;
}
