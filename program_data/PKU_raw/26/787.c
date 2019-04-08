
int main()
{
	char input[200];
	char *a=input;
	int i;
	cin.getline(a,200,'\n');
	while(*a!='\0')
	{	
		if(*(a-1)==' '&&*a==' ')
			a++;
		else
		{
			cout<<*a;
			a++;
		}
	}
	return 0;
}