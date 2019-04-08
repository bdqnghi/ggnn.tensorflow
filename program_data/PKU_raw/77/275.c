char str[100];
char x,y;
void line(char a[])
{
	int i,j;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==y)
		{
			j=i;
			while (a[j]!=x)
			{
				j--;
			}	
			a[i]='0';
			a[j]='0';
			cout << j << " " << i << endl;
			break;
		}
	}
	if(i<strlen(a))
	{
		line(a);
	}
}
int main()
{
	cin >> str;
	x=str[0];
	y=str[strlen(str)-1];
	line(str);
	return 0;
}