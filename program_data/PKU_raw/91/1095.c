int main()
{
	int i,len,sum;
	char S[100];
	gets(S);
	len=strlen(S);
	for(i=0;i<len-1;i++){
		sum=(S[i]-48)+(S[i+1]-48);
		printf("%c",sum+'a'-1);
	}
		sum=(S[0]-48)+(S[len-1]-48);
		printf("%c\n",sum+'a'-1);

//	printf("%d\n",'1');
	return 0;
}