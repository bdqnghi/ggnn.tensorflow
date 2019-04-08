	char num_1[200]={0},num_2[200]={0};
	int i,j,k;
	int num1[200]={0},num2[200]={0},num3[200]={0};
int Greater(int a,int b)
{
	if(a>b)
		return a;
	return b;
}
void print (int len)
{
	for(i=len;i>=0;i--)
	{
		cout<<num3[i];
	}
}
void addition(int len)
{ 
	for(i=0;i<len;i++)
	{
		num3[i]=num1[i]+num2[i]+num3[i];
		num3[i+1]+=num3[i]/10;
		num3[i]=num3[i]%10;
	}
	int temp=len;
	for(i=len;i>0;i--)
	{
	if(num3[i]==0)
		temp=i-1;
	else
		break;
	}
	print(temp);
		
}
int main()
{

	cin>>num_1;
	cin>>num_2;
	for(i=0;i<strlen(num_1);i++)
	{
		num1[i]=num_1[strlen(num_1)-1-i]-'0';
		
	}
	
	for(i=0;i<strlen(num_2);i++)
	{
		num2[i]=num_2[strlen(num_2)-1-i]-'0';
		
	}
	
	int len=Greater(strlen(num_1),strlen(num_2));
	addition(len);

	return 0;
}