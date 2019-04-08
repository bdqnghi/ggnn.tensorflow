
int turn(char num)
{
	if(num>='0'&&num<='9') return num-48;
	if(num>='a'&&num<='z') return num-87;
	if(num>='A'&&num<='Z') return num-55;
}

char turn(int num)
{
	if(num>=0&&num<=9) return num+48;
	if(num>=10&&num<=36) return num+55;
}

int main()
{
	int a,b,i=-1,j=0,s;
	long temp=0,temp1=0;
	char num[8*sizeof(long)]={'\0'};
	int num1[8*sizeof(long)]={0};
	cin>>a;cin.get();
	do
	{
		i++;
		num[i]=cin.get();
	}while(num[i]!=' ');
	cin>>b;
	for(;j<i;j++)
		temp+=turn(num[j])*pow((double)a,i-j-1);
	temp1=temp;
	for(i=0;temp1>0;i++)
	{
		num1[i]=temp1%b;
		temp1=temp1/b;
	}
	for(j=i-1;j>0;j--)
		cout<<turn(num1[j]);
cout<<turn(num1[0]);

	return 0;
}

