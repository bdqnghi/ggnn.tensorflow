int f(int *an1,int *an2);
int an1[211],an2[211],nHighestPos = 0;
char num1[211],num2[211];
int main()
{
    int i,j,len1,len2;
	memset(an1,sizeof(an1),0);
	memset(an2,sizeof(an2),0);
	cin>>num1>>num2;
	len1=strlen(num1);
	len2=strlen(num2);
	for(j=0,i=len1-1;i>=0;i--)
	{
	    an1[j++]=num1[i]-'0';
	}
	for(j=0,i=len2-1;i>=0;i--)
	{
	    an2[j++]=num2[i]-'0';
	}
	nHighestPos = f(an1,an2);
	for(i=nHighestPos;i>=0;i--)
		cout<<an1[i];
	return 0;
}
int f(int *an1,int *an2)
{
    int i;
	for(i=0;i<201;i++)
	{
	    an1[i]=an1[i]+an2[i];
		if(an1[i]>=10)
		{
		    an1[i]=an1[i]-10;
			an1[i+1]++;
		}
		if(an1[i])
			nHighestPos = i;
	}
	return nHighestPos;
}