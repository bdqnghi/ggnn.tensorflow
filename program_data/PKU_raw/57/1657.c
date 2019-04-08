int main()
{
    int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		char m[20],n[20];
		memset(n,0,sizeof(n));
		int k,j;
		scanf("%s",m);
		k = strlen(m);
		if(m[k-3]=='i')
		{
			for(j=0;j<k-3;j++)
			{

				n[j]=m[j];
			}
			printf("%s\n",n);
		}
		else
			{
			for(j=0;j<k-2;j++)
			{
				n[j]=m[j];
			}
			printf("%s\n",n);
		}
	}
	return 0;
}



