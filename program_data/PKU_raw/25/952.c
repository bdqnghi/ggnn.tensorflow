char c1[101]={'\0'};//??????
char c2[101]={'\0'};//??????
char c3[101]={'\0'};//??
int main()
{
	void cal(int);
	int n,i;
	cin>>n;
	c1[0]='1';//???????1
	cal(n);
	char c[100]={'\0'};
	for(i=0;i<strlen(c1);i++)
		c[i]=c1[strlen(c1)-i-1];//?????
	cout<<c;
	return 0;
}
void cal(int n)
{
	int i;
	if(n!=0)
	{
		for(i=0;c1[i]!='\0';i++)
		{
			if((c1[i]-'0')*2>=10)
			{
				c2[i]=(c1[i]-'0')*2-10+'0';
				c3[i+1]='1';            //???1
			}
			else
			{
				c2[i]=(c1[i]-'0')*2+'0';
				c3[i+1]='0';
			}
		}
		for(i=1;c3[i]!='\0';i++)
		{
			if(c2[i]!='\0')
				c2[i]=c2[i]+c3[i]-'0';           
			else if(c3[i]=='1') c2[i]=c3[i];            //???????????????
		}
		strcpy(c1,c2);
		cal(n-1);
	}
}