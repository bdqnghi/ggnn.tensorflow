int main()
{
	int i,from,to,len;
	int num=0;
	char in[100],out[100];
	char i2a[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int a2i[128];
	for(i='0';i<='9';i++)
		a2i[i]=i-'0';
	for(i='a';i<='z';i++)
		a2i[i]=i-'a'+10;
	for(i='A';i<='Z';i++)
		a2i[i]=i-'A'+10;                     //???????
	scanf("%d%s%d",&from,in,&to);
	for(i=0;in[i]!='\0';i++)
	{
		num=num*from+a2i[in[i]];
	}
	if(num==0)
	{
		len=1;
		out[0]='0';
	}
	else 
		len=0;
	while(num>0)
	{
		out[len++]=i2a[num%to];
		num=num/to;
	}
	for(i=len-1;i>=0;i--)
		printf("%c",out[i]);

	return 0;
}