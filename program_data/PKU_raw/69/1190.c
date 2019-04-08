int main(){
	int i;
	char zs1[260],zs2[260];
	int a1[260],a2[260];
	scanf("%s",zs1);
	scanf("%s",zs2);
	if(strcmp(zs1,zs2)==0&&zs1[0]=='0'){
		printf("0");
		return 0;
	}
	memset(a1,0,sizeof(a1));
	memset(a2,0,sizeof(a2));
	int len1=strlen(zs1);
	int j=0;
	for(i=len1-1;i>=0;i--){
		a1[j]=zs1[i]-'0';
		j++;
	}
	int len2=strlen(zs2);
	j=0;
	for(i=len2-1;i>=0;i--){
		a2[j]=zs2[i]-'0';
		j++;
	}
	for(i=0;i<250;i++){
		a1[i]+=a2[i];
		if(a1[i]>=10){
			a1[i]-=10;
			a1[i+1]++;
		}
	}
	int q0=0;
	for(i=251;i>=0;i--){
		if(q0)
			printf("%d",a1[i]);
		else if(a1[i]){
			printf("%d",a1[i]);
			q0=1;
		}
	}
	return 0;
}
