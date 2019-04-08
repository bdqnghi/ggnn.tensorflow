
main(){
	char s1[250], s2[250];
	int i, j, l1, l2, l, num[250], n[250];
	scanf("%s", s1);
	scanf("%s", s2);
	if(strcmp(s1, s2)==0) printf("0");
	else{
	l1=strlen(s1);
	l2=strlen(s2);
	for(i=0; i<250; i++){
		if(s1[i]>=48 && s1[i]<=57) s1[i]-=48;
		else s1[i]=0;
		if(s2[i]>=48 && s2[i]<=57) s2[i]-=48;
		else s2[i]=0;
	}
	for(i=0; i<l1; i++) for(j=l1; j==l1; j++){
		s1[249-i]=s1[j-i-1];
		s1[j-i-1]=0;
	}
	for(i=0; i<l2; i++) for(j=l2; j==l2; j++){
		s2[249-i]=s2[j-i-1];
		s2[j-i-1]=0;
	}
	for(i=0; i<250; i++) num[i]=s1[i]+s2[i];
	n[249]=num[249];
	for(i=248; i>=0; i--) n[i]=num[i]+(n[i+1]>=10);
	l=(n[0]>=10);
	for(i=0; i<250; i++) n[i]-=10*(n[i]>=10);
	if(l==1){
		printf("1");
		for(i=249-((l1>l2)*l1+(l1<=l2)*l2); i<250; i++) if(n[i]>0 || i==249) break;
		for(j=i; j<250; j++) printf("%d", n[j]);
	}
	else{
		for(i=249-((l1>l2)*l1+(l1<=l2)*l2); i<250; i++) if(n[i]>0 || i==249) break;
		for(j=i; j<250; j++) printf("%d", n[j]);
	}
}}