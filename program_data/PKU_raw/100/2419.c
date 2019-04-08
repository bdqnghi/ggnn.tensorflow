int main()
{
	int sum[52];
	char a[301];
	int n,i,f=0;
	gets(a);
	n=strlen(a);
	for(i=0;i<52;i++)
		sum[i]=0;
	for(i=0;i<n;i++){
		if((a[i]>='a')&&(a[i]<='z'))
			sum[26+a[i]-'a']++;
		else if((a[i]>='A')&&(a[i]<='Z'))
			sum[a[i]-'A']++;
	}
	for(i=0;i<26;i++)
		if(sum[i]!=0){
			f++;
			printf("%c=%d\n",i+'A',sum[i]);
		}
	for(i;i<52;i++)
		if(sum[i]!=0){
			printf("%c=%d\n",i+'a'-26,sum[i]);
			f++;
		}
	if(f==0)
		printf("No");
	return 0;
}
