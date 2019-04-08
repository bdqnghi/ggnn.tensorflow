void sort(char str[])
{
	int i,j,k,len;
	len=strlen(str);
	char t;
	for(i=0;i<len-1;i++)
	{k=i;
		for(j=i+1;j<len;j++)
			if(str[j]>str[k]) k=j;
			if(k!=i) {
				t=str[i];
				str[i]=str[k];
				str[k]=t;}
	}
}
void output(char str1[],char str2[])
{
	if(strcmp(str1,str2)==0) printf("YES\n");
	else printf("NO\n");
}
void main()
{
	char str1[100],str2[100];
	scanf("%s %s",str1,str2);
	sort(str1);
	sort(str2);
	output(str1,str2);
}