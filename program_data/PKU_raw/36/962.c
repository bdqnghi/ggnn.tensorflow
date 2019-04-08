int main()
{
	int i,j;
	char A[100],B[100];
	int x[100]={0};
	int flag=0;
	scanf("%s",&A);
	scanf("%s",&B);
	if (strlen(A)==strlen(B))
	{
	for(i=0;i<=strlen(A);i++)
	{
		for(j=0;j<=strlen(B);j++)
			if(A[i]==B[j]&&x[j]==0)
			{
				x[j]=1;
				break;
			}
	}
	for(i=0;i<=strlen(B);i++)
	{
		if(x[i]==0) flag=1;
	}
	if (flag==1) printf("NO");
	else printf("YES");
	}
	else printf("NO");
	return 0;
}
