/*
???
1200015101
??????
*/
int lenth,b[200];
char a[200];
void match(int n)//???n????????
{
	for(int i=n-1;i>=0;i--)
		if(b[i]==1)
		{
			b[i]=0;
			b[n]=0;
			break;
		}
}
int main()
{
	while(cin.getline(a,105))
	{
		for(int i=0;i<strlen(a);i++)
		{
			switch(a[i])
			{
			case '(':b[i]=1;break;
			case ')':b[i]=2;break;
			default :b[i]=0;
			}
		}//??
		for(int i=0;i<strlen(a);i++)
		{
			if(b[i]==2) match(i);
		}//????
		for(int i=0;i<strlen(a);i++)
			cout<<a[i];
		cout<<endl;
		for(int i=0;i<strlen(a);i++)
			switch(b[i]){
			case 0:cout<<' ';break;
			case 1:cout<<'$';break;
			case 2:cout<<'?';break;
		}//??
		cout<<endl;
	}
	return 0;
}