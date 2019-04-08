char s[1000];
void right(int i ,int j)//i????????
{
	if (s[i] == '\0');
	else if (s[i] == '(')
	{
		s[i] = '$'; right(i + 1, j + 1);
	}
	else if (s[i] == ')')
	{
		if (j == 0){ s[i] = '?'; right(i + 1, j); }
		else {
			for (int k = i;;k--)
			if (s[k] == '$'){
				s[k] = ' '; break;
			}
			s[i] = ' ';
			right(i + 1, j - 1);
		}
	}
	else
	{
		s[i] = ' '; right(i + 1, j);
	}
}
int main()
{
	for (; cin >> s;){
		cout << s << endl;		
		right( 0,0);
		cout << s << endl;
	}
}