int main()
{
	char s[500];
	int len,len0,m,n,i,j,f=0;
	gets(s);
	len0=strlen(s);
	for(len=2;len<=len0;len++){
		for(i=0;i<len0-len+1;i++){
			j=i+len-1;m=i;n=j;
			while(s[m]==s[n] && m<=i+len/2-1){
				m++;n--;}
			if(m==i+len/2){
				for(m=i;m<=j;m++)
					printf("%c",s[m]);
				printf("\n");
			}
		}
	}
	return 0;
}