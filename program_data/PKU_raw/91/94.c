int main()
{
	char ori[101];
	gets(ori);
	int i;
	for(i=0;i<strlen(ori)-1;i++)
	{
		printf("%c",ori[i]+ori[i+1]);
	}
	printf("%c\n",ori[i]+ori[0]);
	return 0;
}