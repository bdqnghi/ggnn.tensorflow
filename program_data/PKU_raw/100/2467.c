int main()
{
	int count[128]={0};
	int i,order,c=0;
	char s[301];
	scanf("%s",s);
	for(i=0;s[i];i++){
		if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')){
		order=(int)s[i];
		count[order]++;
		}
	}
	for(i=0;i<128;i++){
		if(count[i]){
			printf("%c=%d\n",i,count[i]);
			c++;
		}
	}
	if(c==0) printf("No\n");
	return 0;
}