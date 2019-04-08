int main()
{
	int n,y,r,sum=0,i;
	char week[7][7]={"Sun.","Mon.","Tue.","Wed.","Thu.","Fri.","Sat."};
	scanf("%d%d%d",&n,&y,&r);
	int s[13]={0,3,0,3,2,3,2,3,3,2,3,2,3};
	if(n%4==0&&n%100!=0||n%400==0)
	{
		s[2]=1;
	}
	for(i=0;i<y;i++)
	{
		sum+=s[i];
	}
	sum+=r;
	sum+=(n-1)+(n-1)/4-(n-1)/100+(n-1)/400;
	sum=sum%7;
    printf("%s",week[sum]);
	return 0;
}