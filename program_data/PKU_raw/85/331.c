

void main()
{
char a[200];
	int n,i,j,m,k,flag;
	scanf("%d",&n);gets(a);
	for(i=0;i<n;i++)
	{
		 gets(a);

                  m=strlen(a);
		flag=1;
                  k=0;
		for(j=0;j<m;j++)
		{
			if(a[j]>='a'&&a[j]<='z')
				k++;
			if(a[j]>='A'&&a[j]<='Z')
				k++;
			if(a[j]=='_')
				k++;
			if(a[j]>='0'&&a[j]<='9')
				k++;
                        else k=k;
		}
		if(k!=m)
			flag=0;
        if(a[0]>='0'&&a[0]<='9')
			flag=0;
		if(flag==0)
			printf("no\n");
		else if(flag==1)
			printf("yes\n");
	}
}