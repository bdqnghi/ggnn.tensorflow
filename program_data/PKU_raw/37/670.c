//***********************************
//**???????                 **
//**?????? 1100012914        **
//**???2011? 11?3?           **
//***********************************
int main()
{
	int t,i,num[26] = {0},j,len,x,flag = 0, rank[26], r = 0,min = 26,z;
	char a[100000],ch;
	cin >> t;
	for(i = 0;i < t;i++)
	{
		cin >> a;
		len = strlen(a);
		for(j = 0;j <= len;j++)
		{
			x = a[j] -  'a';
			num[x]++;
			if(num[x] == 1)
			{
				rank[x] = r++;
			}
		}
		for(j = 0;j <=26;j++)
		{
			if(num[j] == 1)
			{
				if(rank[j] < min)
				{
					min = rank[j];
					z = j;
					flag = 1;
				}
			}
		}
			if(flag == 0)
				cout << "no" << endl;
			else 
			{
				ch = (char)z;
				ch = ch + 'a';
				cout << ch << endl;
			}
			j = 0;
			memset(a,' ',sizeof(a));
                           memset(num,0,sizeof(num));
                           memset(rank,0,sizeof(rank));
                           flag = 0;
                           min = 26;
                           r = 0;
	}
	return 0;
}
