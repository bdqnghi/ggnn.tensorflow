void main()
{
	char s1[100]={0},s2[100]={0};
	int n,i,n1,n2,j,k,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		gets(s1);
		gets(s1);
		gets(s2);
		n1=strlen(s1);
		n2=strlen(s2);
		for(j=n1-1,k=n2-1;k>=0;j--,k--)
		{
			if(s1[j]>=s2[k])s1[j]=s1[j]-s2[k]+48;
			else
			{
				s1[j]=s1[j]-s2[k]+58;
				m=j;
				do
				{
					if(s1[m-1]!='0'){s1[m-1]--;break;}
					else {s1[m-1]+=9;m--;}
				}
				while(m>=0);
			}
		}
		for(j=0;j<n1;j++)printf("%c",s1[j]);
		printf("\n");
		for(j=0;j<100;j++){s1[j]=0;s2[j]=0;}
	}
}
