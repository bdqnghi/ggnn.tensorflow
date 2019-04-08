int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n+1;i++)
	{
		char s[100],*p;
		gets(s);
		int k=0;
		for(p=s;*p!='\0';p++)
			k++;
		if(s[k-2]=='e'&&s[k-1]=='r')
		{
			for(int j=0;j<k-3;j++){
				printf("%c",s[j]);}
			printf("%c\n",s[k-3]);
		}
		else {if(s[k-2]=='l'&&s[k-1]=='y')
		{
			for(int j=0;j<k-3;j++){
				printf("%c",s[j]);}
			printf("%c\n",s[k-3]);
		}
		else {if(s[k-3]=='i'&&s[k-2]=='n'&&s[k-1]=='g')
		{
			for(int j=0;j<k-4;j++){
				printf("%c",s[j]);}
			printf("%c\n",s[k-4]);
		}
		else
		{
			for(int j=0;j<k;j++)
				printf("%c",s[j]);
		}}}
	}
	return 0;
}