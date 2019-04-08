int num[10000]={0};
char s[3000];
int main(void)
{
	int i,j=0,k=0;
	char c;
	scanf("%s",s);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		    k=k*10+s[i]-'0';
		else
		{
			num[k]++;
			k=0;
		}
		if(i==strlen(s)-1&&k!=0)
		    num[k]++;
	}
	int ok=0;
	for(i=9999;i>=0;i--)
	{
		if(num[i]>0&&j==0)
		    j=1;
		else if(num[i]>0&&j==1)
		{
			printf("%d",i);
			ok=1;
			break;
		}
	}
	if(ok==0)
	    printf("No");
	return 0;
}