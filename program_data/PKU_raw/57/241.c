int main()
{
	int n,i,j,a[100],b[100];
	char w[100][10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",w[i]);
	for(i=0;i<n;i++)
	{
		a[i]=strlen(w[i]);
			if(w[i][a[i]-1]=='r')
			b[i]=a[i]-2;
			if(w[i][a[i]-1]=='y')
				b[i]=a[i]-2;
			if(w[i][a[i]-1]=='g')
				b[i]=a[i]-3;
			for(j=0;j<b[i];j++)
				printf("%c",w[i][j]);
		printf("\n");
	}
	return 0;
}
