//********************************************************
//??:????                                         **
//??:??         1200012935                          **
//??:2012.12.28                                       **

int main()
{
	char *p = NULL, *q= NULL;
	char str[100], substr[100], restr[100];
	cin >> str >> substr >> restr;
	p = strstr(str, substr);               
	if(p != NULL)                            //????????
	{
	    q = p + strlen(substr);   
	    strcat(restr, q);                   //?????????????restr??
	    *p = '\0';                         //????
    	strcat(str, restr);                 //???????restr???str??
	}
	    cout << str;

	return 0;
}