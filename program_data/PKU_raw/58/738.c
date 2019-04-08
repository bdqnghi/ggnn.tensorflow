void main()
{
	char s[100][81];
	int n,i,a[81],j,k,r;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	    gets(s[i]);
	for(j=0;j<n;j++)
	{
		for(k=0;k<strlen(s[j]);k++)
			a[k]=(int)s[j][k];
		if(a[0]==95||(a[0]>96&&a[0]<123)||(a[0]>64&&a[0]<91))
		{
			for(r=0;r<strlen(s[j]);r++)
			{
				if((a[r]>96&&a[r]<123)||(a[r]>64&&a[r]<91)||(a[r]==95)||(a[r]>47&&a[r]<58))
				{
					if(r==strlen(s[j])-1)
						printf("1\n");
					else
					    continue;
				}
				else
				{
					printf("0\n");
					break;
				}
			}
		}
		else
			printf("0\n");
	}
}