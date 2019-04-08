
int main()
{
	int w,i,j;
	int day[12]={13,44,72,103,133,164,194,225,256,286,317,347};
	int first[60];
	scanf("%d",&w);
	if(w<=5) first[0]=6-w;
	else first[0]=13-w;
	for(j=1;j<=59;j++)
	{
		first[j]=first[0]+7*j;
	}
	for(i=0;i<=11;i++)
	{
		for(j=0;j<=59;j++)
		{
			if(first[j]==day[i]) printf("%d\n",i+1);
		}
	}
	return 0;
}