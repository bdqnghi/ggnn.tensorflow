
int main()
{
	int a,b,num=0,i;
	char n[31],m[31];
	cin>>a>>n>>b;
	for(i=0;i<strlen(n);i++)
        {
		if(n[i]<58)n[i]-=48;
		else
		{
			if(n[i]>96)n[i]-=87;
			else n[i]-=55;
		}
		num=num*a+n[i];
        }
	for(i=0;num;i++)
	{
		if(num%b<10)m[i]=num%b+48;
		else m[i]=num%b+55;
		num=num/b;
	}
	if(i)for(;i>0;i--)cout<<m[i-1];
        else cout<<0;
	return 0;
}