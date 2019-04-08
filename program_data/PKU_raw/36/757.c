
void main(){
	char w1[100],w2[100];
	int len1,len2,n1[128]={0},n2[128]={0};
	int i,temp;
	scanf("%s",&w1);
	scanf("%s",&w2);
	len1=strlen(w1);
	len2=strlen(w2);
	if(len1!=len2){
		printf("NO\n");
		return;
	}
	for(i=0;i<len1;i++){
		temp=(int) w1[i];
		n1[temp]++;
	}
	for(i=0;i<len2;i++){
		temp=(int) w2[i];
		n2[temp]++;
	}
	for(i=0;i<128;i++){
		if(n1[i]!=n2[i]){
			printf("NO\n");
			return;
		}
	}
	printf("YES\n");
}
