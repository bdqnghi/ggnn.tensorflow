//****************************************
//*?????????                   **
//*?????? 1100012763              **
//*???2011.11.15                     **
//****************************************
int main() 
{
	char array[101] , ans[101];
	int len , i , left , right;
	
	while (cin.getline(array , 101))
	{
		len = strlen(array);
		left = 0; 
		right = 0;
		for (i = 0; i < len; i++)
		{
			ans[i] = ' ';
            if (array[i] == '(')
			{
				left++;
			}
			if (array[i] == ')')
			{
				right++;
				if (right > left)
				{
					left = 0;
					right = 0;
					ans[i] = '?';
				}
			}
		}
		left = 0;
		right = 0;
		for (i = len - 1; i >=0; i--)
		{
			if (array[i] == '(')
			{
				left++;
				if (left > right)
				{
					left = 0;
					right = 0;
					ans[i] = '$';
				}
			}
			if (array[i] == ')')
			{
				right++;
			}
		}
		for (i = 0; i < len; i++)
			cout << array[i];
		cout << endl;
		for (i = 0; i < len; i++)
			cout << ans[i];
		cout << endl;		
	}

	return 0;
}
