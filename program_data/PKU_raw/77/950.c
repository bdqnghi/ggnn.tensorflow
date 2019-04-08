int main()
{
	char s[101];
	char temp[101][2];
	char t;
	int len,i,j,top=-1;
	memset(temp,0,sizeof(temp));
	gets(s);
	len = strlen(s);
	i=0;
	do
	{
		while(s[i]==s[0]&&s[i])
		{
			top++;
			temp[top][1] = s[i];
			temp[top][2] = i;
			i++;
		}
		printf("%d %d\n",temp[top][2],i);
		top--;
		i++;
	
	}while(top!=-1&&s[i]);

	return 0;
}
