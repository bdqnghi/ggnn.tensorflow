int main(){
	int stop,i,count,l,j,k,mid,l1,l2,judge,b2[210]={0},b1[210]={0},re[210]={0};
	char a1[210]={0},a2[210]={0};
	count=0;
	judge=0;
	scanf("%s%s",a1,a2);
	l1=strlen(a1);
	l2=strlen(a2);
	for(i=210-l1;i<210;i++){
		b1[i]=a1[count]-'0';
		count++;
	}
	count=0;
	for(i=210-l2;i<210;i++){
		b2[i]=a2[count]-'0';
		count++;
	}
	if(l2>l1){
		l=l2+1;
	}else{
		l=l1+1;
	}
	for(i=209;i>=210-l;i--){
		re[i]+=b1[i]+b2[i];
		if(re[i]>=10){
			re[i]-=10;
			re[i-1]++;
		}
	}
	for(i=210-l;i<210;i++){
		if(re[i]==0&&judge==0){
			continue;
		}
		if(judge==0){
			if(re[i]!=0){
				judge++;
			}
		}
		if(judge!=0){
			printf("%d",re[i]);
		}
	}
	if(b1[209]==0&&b2[209]==0){
		printf("0");
	}
	scanf("%d",&stop);
	return 0;
}