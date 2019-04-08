
int find(char *a, int n)
{
	int i,j,t,k;
	for(i=0;a[i]!='\0';i++)
	{
		t=1;
		if(a[i]==a[i+n-1])
		{
			j=i+1;k=i+n-2;
			do
			{
				if(a[j]==a[k]){j++;k--;t++;}
				else break;
			}
			while(k>=j);
			if(t==n/2||t==n/2+1)
			{
				for(j=i;j<=i+n-1;j++) printf("%c",a[j]);
				printf("\n");
			}
		}
	}
}

main()
{
	char a[501];
	int l,i;
	gets(a);
	l=strlen(a);
	for(i=2;i<=l;i++)
	    find(a,i);
}