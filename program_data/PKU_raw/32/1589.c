
int an1[100];
int an2[100];
char szLine1[100];
char szLine2[100];
void main()
{   
	int n,p,i,j,nLen1,nLen2,max=0;;
	scanf("%d",&n);
	for(p=0;p<n;p++)
	{
		scanf("%s",szLine1);
		scanf("%s",szLine2);
	
	memset(an1,0,sizeof(an1));
	memset(an2,0,sizeof(an2));
	
	nLen1=strlen(szLine1);
	j=0;

	for(i=nLen1-1;i>=0;i--)
	{
		an1[j++]=szLine1[i]-'0';
	}
	nLen2=strlen(szLine2);
	j=0;
	for(i=nLen2-1;i>=0;i--)
	{
		an2[j++]=szLine2[i]-'0';
	}
	if(nLen1>nLen2)
		max=nLen1-1;
	else
		max=nLen2;
	for(i=0;i<max;i++)
	{
		an1[i]-=an2[i];
		if(an1[i]<0)
		{
			an1[i]+=10;
			an1[i+1]--;
		}
	}
	for(i=max;i>=0;i--)
		printf("%d",an1[i]);
	printf("\n");
	}

}

