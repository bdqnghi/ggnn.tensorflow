int main()
{
	char a[100],b[100],A[128]={0},B[128]={0};
	int i,k,n=0;
	scanf("%s %s",a,b);
	for(i=0;i<strlen(a);i++)
	{
		k=a[i];
		A[k]++;
	}
	for(i=0;i<strlen(b);i++)
	{
		k=b[i];
		B[k]++;
	}
	for(i=0;i<128;i++)
	{
		if(A[i]==B[i]) 
		{
			n++;
			continue;
		}
		else 
		{
			printf("NO\n");
			break;
		}
	}
	if(n==128) printf("YES\n");
	return 0;
}