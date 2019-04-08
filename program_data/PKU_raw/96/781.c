int main(){
	int i,j,k,l,count,mid,judge,re[110];
	char num[110],fra[110];
	count=-1;
	scanf("%s",num);
	l=strlen(num);
	for(i=0;i<l;i++){
		fra[i]=num[i];
	}
	judge=(num[0]-'0')*10+(num[1]-'0');
//	for(i=0;i<l;i++){
//		printf("%c\n",fra[i]);
//	}
	for(i=0;i<l-1;i++){
		mid=(fra[i]-'0')*10+(fra[i+1]-'0');
		count++;
		re[count]=mid/13;
		if(count==0&&re[count]==0){
			re[0]=10000;
		}
		fra[i+1]=mid%13+'0';
	}
	for(i=0;i<l-1;i++){
		if(re[i]==10000&&i==0){
			continue;
		}
		printf("%d",re[i]);
	}
	if(l<2){
		judge=0;
	}
	if(l>2||(l==2&&judge>12)){
		printf("\n%d",fra[l-1]-'0');
	}else if(l==1||(l==2&&judge<13)){
		printf("0\n");
		if(l==1){
			printf("%c",num[0]);
		}else if(l==2){
			printf("%d",judge);
		}
	}
	return 0;
}