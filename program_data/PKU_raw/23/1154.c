int main()
{
	char a[100][100]={'\0'},b[100]={'\0'};
	int i,n=0,j,m=0,u;
	gets(a[0]);
	n=strlen(a[0]);
	for(i=0,j=1;i<n;i++)
	{
		if(a[0][i]==' ')
		{
			b[j]=i+1;
			j++;
		}
	}
	b[j]=strlen(a[0])+1;
	for(u=1;u<=j;u++)
	{
		strncpy(a[u],a[0]+b[u-1],b[u]-b[u-1]-1);
		//printf("%d %d %d\n",u,b[u-1],b[u]);
	}
	for(i=j;i>=2;i--)
		printf("%s ",a[i]);
	printf("%s",a[1]);
	return 0;
}



		

