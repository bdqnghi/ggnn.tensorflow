//********************************
//*???????          **
//*?????? 1200012784 **
//*???2012.12.4         **
//********************************

void change(char *);                             //??????

int main()
{	
	char ch[50];                                 //?????????
	cin.getline(ch, 300);
	change(ch);                                  //????????
	cout << ch << endl;                          //??
	return 0;
}

void change(char *ch)
{
	int l = strlen(ch);
	char key = ch[0];
	for (int i = 0; i < l - 1; i++)
		ch[i] = ch[i] + ch[i + 1];
	ch[l - 1] = ch[l - 1] + key;
}