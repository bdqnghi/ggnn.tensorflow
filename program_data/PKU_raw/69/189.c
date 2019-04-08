int main()
{
	int a1[Max+10]={0};
    int a2[Max+10]={0};
    char s1[Max+10];
    char s2[Max+10];
	int i,j,e,f;
	int L1,L2;
	scanf("%s",s1);
	scanf("%s",s2);
	L1=strlen(s1);
	L2=strlen(s2);
	j=0;
	if(L1==1&&L2==1)
	{
		e=s1[0]-'0';
		f=s2[0]-'0';
		printf("%d",e+f);

	}
	else
	{
	for(i=L1-1;i>=0;i--)
		a1[j++]=s1[i]-'0';
	j=0;
	for(i=L2-1;i>=0;i--)
		a2[j++]=s2[i]-'0';
	for(i=0;i<Max;i++)
	{
		a1[i]+=a2[i];
		if(a1[i]>=10)
		{
			a1[i]-=10;
			a1[i+1]++;
		}
	}
	
	for(i=Max;i>=0;i--)
	{
		if(a1[i]!=0)
		{
			j=i;
            break;
		}
	}
	for(i=j;i>=0;i--)
		printf("%d",a1[i]);
	}
	return 0;
}
