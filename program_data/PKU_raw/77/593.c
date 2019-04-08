//****************************************
//*???????                       **
//*????? 1100012873                **
//*???2011.11.16                     **
//****************************************
char t[100];//??????
int pd (int, int);
int main ()
{
	int l;
    cin >> t;
    l = strlen (t);
    pd (0, l);
    return 0;
}
int pd (int x, int length)
{
	int i;
    for (i = 1;x + i < length;)  
	{
		if (t[x] == t[x + i] && t[x] != 'o')//??????????
			return pd (x + i, length);
        else if (t[x+i] != t[x] && t[x+i] != 'o')//???????????????
        {
			t[x] = 'o';
		    t[x+i] = 'o';
		    cout << x << " " << x+i << endl;
            return pd (x - 1, length);
        }
	    else if (t[x+i] != t[x] && t[x+i] == 'o')//????????????
	        i++;
	    else if (t[x] == 'o' && t[x+i] == 'o')//???????
			return pd (x - 1, length);
	} 
}


