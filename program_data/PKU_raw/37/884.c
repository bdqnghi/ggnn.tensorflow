//****************************************
//*?????????????????                                    **
//*?????? 1100012907       **
//*???2011.11.8                          **
//****************************************
int main()
{
	char str[100000];
	int t, i, k, p, len;
	cin >> t;
	cin.get();//?????
	for(i = 1;i <= t; i++)
	{
        cin.getline(str,100000);//?????
		len = strlen(str);
		for(p = 0; p < len; p++)
		{
			for(k = 0; k < len; k++)
			{
				if(str[k] == str[p] && k != p) break;//????????
			}
		    if(k == len)
			{
			    cout << str[p] << endl; break;//?????
			}
		}
	    if(p == len)
		cout << "no" << endl;
	}
	return 0;
}