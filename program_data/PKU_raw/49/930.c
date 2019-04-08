int main()
{
	int ishuiwen(char *p);
	char s[500],sub[500]="0";
	int i,j,l,len;
	gets(s);
	len=strlen(s);
	for(l=2;l<=len;l++){
		for(i=0;i<=len-l;i++){
			for(j=0;j<l;j++){
				sub[j]=s[i+j];
			}
			sub[j]='\0';
			if(ishuiwen(sub))
				printf("%s\n",sub);
		}
	}
	return 0;
}
int ishuiwen(char *p)
{
	int len,i;
	len=strlen(p);
	for(i=0;i<len/2;i++){
		if(*(p+i)!=*(p+len-1-i))
			return 0;
	}
	return 1;
}