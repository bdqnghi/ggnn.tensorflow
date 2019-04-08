void main()
{
	int m,n,p[100]={0},q[100]={0},num=0;
	int i,j,num1[200]={0},num2[200]={0};
	char a[100],b[100];
	scanf("%s%s",a,b);
	m=strlen(a);
	n=strlen(b);
	if(m!=n)
		printf("NO\n");
	else 
	{
		for(i=0;i<m;i++)
		{
			for(j=i;j<m;j++)
			{
				if(p[j]==0&&a[j]==a[i])
				{
					num1[(int)a[i]]++;
					p[j]=1;
				}
			}
		}
         i=0;
		 j=0;
        for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				if(q[j]==0&&b[j]==b[i])
				{
					num2[(int)b[i]]++;
					q[j]=1;
				}
			}
		}
		for(i=32;i<123;i++)
		{
			if(num1[i]==num2[i])
				num++;
		}
	
		if(num==91)
			printf("YES\n");
		else printf("NO\n");
	
	}
}