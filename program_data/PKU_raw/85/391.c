void main()
{
	int n,l,i,j;
	char a[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int t=0;
		scanf("%s",a[i]);
		for(j=0;j<32;j++)
			if(t==-1)
			{
				printf("no\n");
				continue;
			}
			if((a[i][0]>='A'&& a[i][0]<='Z') || (a[i][0]>='a' && a[i][0]<='z') || a[i][0]=='_')
				t=0;
			else
			{
				t=-1;
				printf("no\n");
				continue;
			}
			l=strlen(a[i]);
			j=1;
			while(j<l)
			{
				if ((a[i][j]>='A' && a[i][j]<='Z')||(a[i][j]>='a' && a[i][j]<='z')||(a[i][j]>='0' && a[i][j]<='9')|| a[i][j]=='_')
					t=0;
					else
				{
					t=-1;
					break;
				}
					j++;
			}
			if(t==-1)
				printf("no\n");
			if(t==0)
				printf("yes\n");
	}
}

