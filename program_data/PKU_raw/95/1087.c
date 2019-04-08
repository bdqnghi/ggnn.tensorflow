int main()
{
	char str1[90],str2[90];
	int i,m,n,s=0;
	gets(str1); gets(str2);
	m=strlen(str1);n=strlen(str2);
	for(i=0;i<m;i++)
	{
		if(str1[i]>='a') str1[i]=str1[i]-'a'+'A';
		if(str2[i]>='a') str2[i]=str2[i]-'a'+'A';
		if(str1[i]>str2[i]) { printf(">"); s+=1; break;}
		if(str1[i]<str2[i]) { printf("<"); s+=1; break;}
	}
	if(!s) printf("=");
}