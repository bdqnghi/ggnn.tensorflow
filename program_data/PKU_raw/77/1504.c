
int main()
{
	char children[101];
	char boy, girl, left;
	cin.getline(children, 101);
	int l = strlen(children), cnt = 0;
	boy = children[0];
	girl = children[l - 1];
	left = boy > girl? (girl - 1) : (boy - 1);
	do
	{
		for(int i = 1; i < l; i++)
		{
			if(children[i] == left)
			{
				i++;
				continue;
			}
			if(children[i] == girl)
			{
				for(int j = i - 1; j >= 0; j--)
				{
					if(children[j] == left)
					{
						j--;
						continue;
					}
					if(children[j] == girl)
						break;
					else
					{
						cout << j << " " << i << endl;
						children[i] = left;
						children[j] = left;
						cnt += 2;
						break;
					}
				}
			}
		}
	}while(cnt != l);
	return 0;
}