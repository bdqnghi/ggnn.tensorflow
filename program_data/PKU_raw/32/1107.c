int main()
{
	int a,b,i,j,n,m;
	char ss1[100],ss2[100];
	int s1[100],s2[100],s3[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%s",ss1);
	scanf("%s",ss2);
		a=strlen(ss1);
		b=strlen(ss2);
		for(j=0;j<100;j++)
		{
			s1[j]=ss1[j]-48;
			s2[j]=ss2[j]-48;
		}
		for(j=b-1;j>=0;j--)
		{
			s2[j+a-b]=s2[j];
		}
		for(j=0;j<a-b;j++)
		{
			s2[j]=0;
		}
		for(j=a-1;j>=0;j--)
		{
			if(s1[j]>=s2[j])
				s3[j]=s1[j]-s2[j];
			else 
			{
				s3[j]=10+s1[j]-s2[j];
				s1[j-1]=s1[j-1]-1;
			}
		}
		for(j=0;j<a;j++)
		{
			if(s3[j]!=0)
			m=1;
			if(m==1)
				printf("%d",s3[j]);
		}
		printf("\n");
		m=0;
	}


	return 0;
}