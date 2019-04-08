
int main()
{
	int i,n1,n2,count1[26]={0},count2[26]={0},count={0};
	char s[50],w[50];
	scanf("%s%s",s,w);
	for(i=0;s[i]!='\0';i++){
		n1=s[i]-'a';
		count1[n1]++;
	
	}
	for(i=0;w[i]!='\0';i++){
		n2=w[i]-'a';
		count2[n2]++;
	}
	for(i=0;i<26;i++){
		if(count1[i]==count2[i])
			count++;
	}
	if(count==26){
		printf("YES");
	}
	else{
		printf("NO");
	}
			
	return 0;
}

