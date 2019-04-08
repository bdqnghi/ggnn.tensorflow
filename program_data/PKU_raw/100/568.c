int main()
{
	char str[300]={0},alf[26]={0};
	int i,j,n=0;
	gets(str);
	for(i=0;i<300;i++){
		if(str[i]>='a'&&str[i]<='z'){
			n++;
			alf[str[i]-'a']++;
		}
	}
	if(n!=0){
         for(n=0,j=0;j<26;j++){
		    if(alf[j]!=0){
	           printf("%c=%d\n",j+97,alf[j]);
			}
		 }
	}
	else if(n==0){
		       printf("No\n");
		}
	
	return 0;
}