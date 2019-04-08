void work(char*);
int main()
{                    
 	char *p, s[101];          //????p?????????s
	cin.getline(s, 100);
	p = s;                    //??????????p
	for(; *p != '\0'; p++)    //????'\0'
	{
		if(*p == ' ')         //???????
		{
			if(*(p + 1) == ' ')  //??????????
			{
				work(p);
				p--;
			}
		}
	}
	p = s;
	cout << p;
	return 0;
}
void work(char *p)
{
	for(;; p++)
	{
		*p = *(p + 1);
		if(*p == '\0')
			break;
	}
	return;
}
