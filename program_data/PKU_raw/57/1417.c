void main()
{
	void abc(char a[][32],int m);
	int i,n;
	char stu[50][32];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%s",stu[i]);
	abc(stu,n); 
}
void abc(char a[][32],int m)
{
	int i,sum,j,k,t;
	for(i=0;i<m;i++)
	{
	 sum=strlen(a[i]);
    if((a[i][sum-1]=='r')&&(a[i][sum-2]=='e'))
    {
    	for(j=0;j<sum-2;j++)
    	printf("%c",a[i][j]);
    	
    }
    else if((a[i][sum-1]=='y')&&(a[i][sum-2]=='l'))
    {
    	for(t=0;t<sum-2;t++)
    	printf("%c",a[i][t]);
    	
    }
    else if(((a[i][sum-1]=='g')&&(a[i][sum-2]=='n'))&&(a[i][sum-3]=='i'))
    {
    	for(k=0;k<sum-3;k++)
    	printf("%c",a[i][k]);
    	
    }
     printf("\n");
	}
}

