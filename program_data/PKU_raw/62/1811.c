char str[100] = {0};
int flag = 0;
int len;
void clear (char *a)
{
	if(a == str)
	{
		cout << *a ;
		return;
	}
	else
		if(*a == 32 && flag != 0)
			clear (a - 1);
		else
			if (*a == 32)
			{
				flag ++;
				clear(a-1);
				cout << ' ';
			}
			else
			{
				flag = 0;
				clear (a-1);
				cout << *a;
			}
}				

int main()
{
	cin.getline(str,100);
    len = strlen(str);
	clear (str+len-1);
	return 0;
}


