int main()
{
    int a[999];char r[999][26];int b[125]={0};int n,i,j,maxi,s;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
		scanf("%s",r[i]);
		s=strlen(r[i])-1;
		for(j=0;j<=s;j++)
		{
			b[r[i][j]]=b[r[i][j]]+1;
		}
	}
    maxi=65;
    for(i=66;i<=90;i++)
	{
		if(b[i]>b[maxi]) maxi=i;
	}
    printf("%c\n",maxi);
    printf("%d\n",b[maxi]);
	for(i=0;i<=n-1;i++)
	{
		s=strlen(r[i])-1;
		for(j=0;j<=s;j++)
		{
			if(r[i][j]==maxi)
			{
				printf("%d\n",a[i]);
				break;
			}
		}
	}

	return 0;
}
