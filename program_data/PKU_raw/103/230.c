inline char turn(char c)
{
	if(c>=97)return c-32;
	else return c;
}
int main()
{
	char ch[1200],temp;
	int length,i,j,k;
	cin>>ch;
	length=strlen(ch);
	k=1;
	temp=turn(ch[0]);
	for(i=1;i<length;i++)
	{
		if(turn(ch[i])==temp)
		{
			k++;
		}
		else
		{
			cout<<"("<<temp<<","<<k<<")";
			temp=turn(ch[i]);
			k=1;
		}
	}
	cout<<"("<<temp<<","<<k<<")";
	return 0;
}
