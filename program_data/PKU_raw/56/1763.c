int main()
{
	char input[20]={0},i=0;
	while(scanf("%c",&input[i])!=-1&&input[i]!='\n')
		i++;
	for(i--;i>=0;i--)
		printf("%c",input[i]);
	printf("\n");
}