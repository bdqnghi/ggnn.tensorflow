int main(void)
{
	char res[32]="0000000000000000000000000000001";
	int n,i=0,j,c=0,t;
	scanf("%d",&n);
	for(;i<n;i++)
	{
		for(j=30;j>=0;j--)
		{
			t=(res[j]-'0')*2+c;
			res[j]=t%10+'0';
			c=t/10;
		}
	}
	for(i=0;i<31&&res[i]=='0';i++);
	for(j=i;j<31;j++)res[j-i]=res[j];res[j-i]='\0';
	printf("%s\n",res);
	return 0;
}