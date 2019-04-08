int main()
{
	int zheng[255];
	char fan[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int from,to;
	char in[255];
	scanf("%d%s%d",&from,in,&to);
	int i;
	for(i='0';i<='9';i++)
		zheng[i]=i-'0';
	for(i='A';i<='Z';i++)
		zheng[i]=i-'A'+10;
	for(i='a';i<='z';i++)
		zheng[i]=i-'a'+10;
	int sum=0;
	for(i=0;in[i];i++)
	{
		sum=sum*from+zheng[in[i]];
	}
	char out[255]="0";
	int l=0;
	l=(sum==0)?1:0;
	while(sum>0)
	{	out[l]=fan[sum%to];
		l++;
		sum/=to;
	}
	for(i=l-1;i>=0;i--)
		printf("%c",out[i]);
	return 0;

}
