int main(void)
{
	char res[32]="0000000000000000000000000000001",temp[2]="0";
	int n,i=0,j,c=0,t;
	scanf("%d",&n);
	for(;i<n;i++)
	{
		for(j=30;j>=0||(!c&&res[j]=='0');j--)
		{
			temp[0]=res[j];
			t=atoi(temp)*2+c;
			res[j]=t%10+'0';
			c=t/10;
		}
	}
	for(i=0;i<31&&res[i]=='0';i++);
	for(j=i;j<31;j++)res[j-i]=res[j];res[j-i]='\0';
	printf("%s\n",res);
	return 0;
}
