
int main(int argc, char* argv[])
{
	int n;
	scanf("%d\n",&n);
	int i,j,k;
	for(i=0;i<n;i++)
	{
		char str1[105];
		char str2[105];
		int x1[105]={0},x2[105]={0},s[105]={0};
		scanf("%s",str1);
		scanf("%s",str2);
		int a,b;
		a=strlen(str1);
		b=strlen(str2);
		for(j=0;j<a;j++)
		   x1[j]=str1[j]-'0';
		for(j=b-1;j>=0;j--)
		   x2[j+a-b]=str2[j]-'0';
		for(j=0;j<a-b;j++)
			x2[j]=0;
		for(j=a-1;j>=0;j--)
		{
			if(x1[j]<x2[j])
			{
				s[j]=10+x1[j]-x2[j];
				x1[j-1]--;
			}
			else
				s[j]=x1[j]-x2[j];
		}
		for(j=0;j<a;j++)
			printf("%d",s[j]);
		printf("\n");
	}
	return 0;
}