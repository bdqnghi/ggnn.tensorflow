int main(){
	int i,j,len1,len2;
	char ds1[260],ds2[260];
	int a1[260]={0};
	int a2[260]={0};
	scanf("%s%s",ds1,ds2);
	len1=strlen(ds1);
	j=0;
	for(i=len1-1;i>=0;i--){
		a1[j]=ds1[i]-'0';
		j++;
	}
	len2=strlen(ds2);
	j=0;
	for(i=len2-1;i>=0;i--){
		a2[j]=ds2[i]-'0';
		j++;
	}
	if(a1[0]==0&&a2[0]==0){
		printf("0");
		return 0;
	}
	for(i=0;i<250;i++){
		a1[i]+=a2[i];
		if(a1[i]>=10){
			a1[i]-=10;
			a1[i+1]++;
		}
	}
	int q0=0;
	for(i=250;i>=0;i--){
		if(q0)
			printf("%d",a1[i]);
		else if(a1[i]){
			printf("%d",a1[i]);
			q0=1;
		}
	}
	return 0;
}