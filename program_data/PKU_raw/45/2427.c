
void main()
{
	int i,j,len,fail=0;
	char s[50],w[20];
	scanf("%s %s",s,w);
	len=strlen(s);
	i=j=0;
	while(1){
		if(w[i]!=s[0]){
			i++;
			continue;
		}
		for(j=0;j<len;j++){
			if(w[i+j]!=s[j]){
				fail=1;
				break;
			}
		}
		if(fail==1){
			i++;
			fail=0;
			continue;
		}
		else break;
	}
	printf("%d\n",i);
}