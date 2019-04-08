int main()
{
	char ch[110];
	int note[110], l, r;
	while(cin >> ch)
	{
		memset(note, 0, sizeof(note));
		for(int i = 0; ch[i] != '\0'; i++)
		{
			switch(ch[i])
			{
			case '(':
			{
				l = 0;
				r = 0;
				note[i] = 1;
				for(int j = i; ch[j] != '\0'; j++)
				{
					switch (ch[j])
					{
					case '(': l++; break;
					case ')': r++; break;
					default:	break;
					}
					if(l == r)
					{
						note[i] = 0;
						break;
					}
				}
				break;
			}
			case ')':
			{
				l = 0;
				r = 0;
				note[i] = -1;
				for(int j = i; j >= 0; j--)
				{
					switch (ch[j])
					{
					case '(': l++; break;
					case ')': r++; break;
					default:	break;
					}
					if(l == r)
					{
						note[i] = 0;
						break;
					}
				}
				break;
			}
			default:	break;
			}
		}
		cout << ch << endl;
		for(int i = 0; ch[i] != '\0'; i++)
		{
			switch (note[i])
			{
			case 1: cout << "$"; break;
			case -1: cout << "?"; break;
			case 0: cout << " "; break;
			default:
				break;
			}
		}
		cout << "\n";
	}
	return 0;
}