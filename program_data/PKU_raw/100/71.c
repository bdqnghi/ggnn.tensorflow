void statistic(char str[],int letter_num[],int n)
{
	int i;
	for(i=0;i<n;i++)
		letter_num[str[i]-'a']++;
}
	
void main()
{
	char str[300],letter[27]={"abcdefghijklmnopqrstuvwxyz"};
	int n,i,letter_num[26]={0},t=0;
	gets(str);
	n=strlen(str);
	statistic(str,letter_num,n);
	for(i=0;i<26;i++)
	{
		if(letter_num[i]!=0)
		{
			putchar(letter[i]);
			printf("=%d\n",letter_num[i]);
			t++;
		}
	}
	if(t==0)
		printf("No");
}