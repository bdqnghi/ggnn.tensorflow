int main()
{
	int a[30]={0}, A[30]={0}, i, m, flag=0;
	char str[300];
    gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]<='z' && str[i]>='a') {m=str[i]-'a'; a[m]++;}
		else if(str[i]<='Z' && str[i]>='A') {m=str[i]-'A'; A[m]++;}
	}
	for(i=0;i<26;i++)
		if(A[i]!=0) {printf("%c=%d\n", 'A'+i, A[i]), flag=1;};
    for(i=0;i<26;i++)
		if(a[i]!=0) {printf("%c=%d\n", 'a'+i, a[i]), flag=1;};
	if(flag==0) printf("No\n");
    return 0;
}