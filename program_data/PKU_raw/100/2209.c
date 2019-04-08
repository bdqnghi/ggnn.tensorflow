
int main(){
    char a[32]={0},b[32]={0},x,i;
	int flag=0;
	do
	{
		scanf("%c",&x);
		if(x>='A'&&x<='Z')
		{
			a[(int)(x-'A')]++;
		}
		if(x>='a'&&x<='z')
		{
			b[(int)(x-'a')]++;
		}
	}while(x!='\n');
    for(i=0;i<26;i++)
	{
		if(a[i]!=0)
		{
			printf("%c=%d\n",'A'+i,a[i]);
			flag=1;
		}
	}
    for(i=0;i<26;i++)
	{
		if(b[i]!=0)
		{
			printf("%c=%d\n",'a'+i,b[i]);
            flag=1;
		}
	}
    if(flag!=1)
	{
		printf("No\n");
	}
	return 0;
}