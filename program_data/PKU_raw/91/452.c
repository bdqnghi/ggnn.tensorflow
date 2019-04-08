int main()
{   
	int i,j,k;
	char st[104]={"\0"},str[104]={"\0"};
	gets(st);
	for(i=103;i>=0;i--)
	{
		if(*(st+i)!='\0')
			break;
	}
    for(j=0;j<i;j++)
		*(str+j)=*(st+j)+*(st+j+1);
	*(str+i)=*(st+i)+*(st+0);
	for(k=0;k<=i;k++)
		printf("%c",*(str+k));
	return 0;
}
