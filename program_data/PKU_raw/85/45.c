int main()
{
	int n,i,j,y,b[500];
	scanf("%d",&n);	
	char a[20];
	for(i=0;i<n;i++)
	{
		scanf("%s",&a);
		if((a[0]>='a')&&(a[0]<='z')||(a[0]>='A')&&(a[0]<='Z')||(a[0]=='_'))
		{
			b[i]=1;
			for(j=1;j<(int)strlen(a);j++)
			{
				if((a[j]>='a')&&(a[j]<='z')||(a[j]>='A')&&(a[j]<='Z')||(a[j]=='_')
					||(a[j]>='0')&&(a[j]<='9'))
				{
					b[i]=1;
				}
				else
					b[i]=0;
				if(b[i]==0)
					break;
			}
		}
		else
			b[i]=0;
	}
	for(y=0;y<n;y++)
	{
		if(b[y]==0)
			printf("no\n");
		else
			printf("yes\n");
	}
	return 0;
}


