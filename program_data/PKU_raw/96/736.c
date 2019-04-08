/* ???? ??13.cpp
 * ??? 1200012826 ??
 * ??? 2012?11?16?
 */
int main()
{
	int i, r, y, b=0, s[101];
	char a[101];
	cin >> a;
	if(a[1] == '\0')
	{
		cout << 0 << endl;
		cout << a[0] << endl;
	}
	else
	{
	
		r=(a[0]-'0')*10+a[1]-'0';
		for(i=1; a[i] != '\0'; i++)
		{
		
			s[i]=r/13;
			y=r%13;
			b++;
			r=10*(r%13)+a[i+1]-'0';
			if(a[i+1] == '\0')
			{
				break;
			} 
		}
		if(s[1] != 0)
		{
			for(i=1; i <= b; i++)
			{
				cout << s[i];
			}
			cout << endl;
			cout << y << endl;
		}
		else
		{
			if(b == 1)
			{
				cout << 0 << endl;
			}
			else
			{
				for(i=2; i <= b; i++)
				{
					cout << s[i];
				}
				cout << endl;
			}
			cout << y << endl;
		}
		return 0; 
	}
} 