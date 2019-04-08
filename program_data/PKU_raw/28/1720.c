int main()
{
	char s[6000],a[50];
	gets(s);
	int ls=strlen(s);
	int la;
	int i,j=0;
	int first=1;
	for(i=0;i<ls+1;i++){
		if(s[i]!=' '&&s[i]!='\0'){
			a[j]=s[i];
			j++;
		}
		else{
			a[j]='\0';
			j=0;
			la=strlen(a);
		    if(first==1&&la!=0){
			printf("%d",la);
			first=0;
			}else if(la!=0){
			printf(",%d",la);
			}
		}
	}
		
	return 0;
}