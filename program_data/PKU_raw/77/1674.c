void print(char str[100])
{
	int stack[100];
	int i,j=0;
	int la;
	la=strlen(str);
	for(i=0;i<la;i++)
	{
		if(str[i]==str[0])
			stack[j++]=i;
		else if(str[i]!=str[0])
		{
			cout<<stack[j-1]<<' '<<i<<endl;
		    j--;
		}
	}
}
int main()
{
	char str[101];
	cin.getline(str,101);
	print(str);
	return 0;
}
