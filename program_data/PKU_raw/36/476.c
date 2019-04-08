char str1[100],str2[100];
void inverse(char *str)
{
	int t,flag,i;
	char temp;
	t=strlen(str);
	do{
		flag=0;
		for(i=0;i<t-1;i++)
		{
			if(str[i]<str[i+1])
			{
				temp=str[i];
				str[i]=str[i+1];
				str[i+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
			break;
	}while(t--);
}
void main()
{
	scanf("%s %s",str1,str2);
	inverse(str1);
	inverse(str2);
	if(strcmp(str1,str2)==0)
		printf("YES");
	else
		printf("NO");
}