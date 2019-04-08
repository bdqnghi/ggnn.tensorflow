void main()
{
	int n,i,j,flag=0;
	char m1[100],m2[100],m3[100],m4[100];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%s",m1);
		scanf("%s",m2);
		scanf("\n");
		for(j=0;j<=(strlen(m1)-strlen(m2)-1);j++) m3[j]='0';
		m3[j]='\0';
		strcat(m3,m2);
		for(j=strlen(m1)-1;j>=0;j--)
		{
			if (m1[j]<'0')
			{
				m1[j]=m1[j]+10;
				m1[j-1]=m1[j-1]-1;
			}
			if (m1[j]>=m3[j]) m4[j]=m1[j]-m3[j]+'0';
			else 
			{
				m4[j]=m1[j]-m3[j]+10+'0';
				m1[j-1]=m1[j-1]-1;
			}
		}
		for(j=0;j<=strlen(m1)-1;j++)
		{
			if(m4[j]!='0') flag=1;
			if (flag==1) printf("%c",m4[j]);
		}
		printf("\n");
	}
}
