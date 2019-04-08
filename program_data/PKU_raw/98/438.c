int main()
{
	int n,l=0,i,a[1000];
	char s[1000][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",s[i]);
	for(i=0;i<n;i++)
		a[i]=strlen(s[i]);
	for(i=0;i<n;i++)
	{
		printf("%s",s[i]);
	   	l+=a[i]+1;
		if(i!=n-1 && l+a[i+1]<=80)printf(" ");
		else{
			l=0;
			printf("\n");
		}
	}
     return 0;
}



