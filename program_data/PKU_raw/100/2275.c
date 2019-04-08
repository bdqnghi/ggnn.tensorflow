int main()
{
	int i,j,k=0,l,t,b[400]={0,0};
	char a[302],c[300];
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(((a[i]>='A')&&(a[i]<='Z'))||((a[i]>='a')&&(a[i]<='z')))
		{
			t=a[i];
			c[t]=a[i];
			b[t]++;
		}
	}
	for(j=0;j<=122;j++)
	{
		if(b[j]!=0)
		{
			printf("%c=%d\n",c[j],b[j]);
			k++;
		}
	}
	if(k==0)
		printf("No\n");
	return 0;
}
