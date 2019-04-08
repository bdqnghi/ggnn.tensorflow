//**************************
//*????????       **
//*??????           **
//*???20131114         **
//**************************
int main ()
{
	int n ,i , j ,k ,nLen1 ,nLen2 ,num1 ,num2;
	int a[101] ,b[101] ,c[101];
	char str1[101], str2[101];
	cin >> n;
	for(i = 1; i <= n ;i++)
	{
		memset(str1,0,sizeof(str1));
		memset(str2,0,sizeof(str2));
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		nLen1 = 0; 
		nLen2 = 0;
		num1 = 0;
		num2 = 0;
		cin >> str1 >> str2;
		nLen1 = strlen(str1);
		nLen2 = strlen(str2);
		for(j = nLen1 - 1; j >= 0; j--)
			a[num1++] = str1[j] - '0';
		for(k = nLen2 - 1; k >= 0; k--)
			b[num2++] = str2[k] - '0';
		for(int t = 0; t <= nLen2 - 1; t++)
		{
			if(a[t] >= b[t])
				c[t] = a[t] - b[t]; 
			else
			{
				c[t] = a[t] - b[t] + 10;
				a[t+1] -= 1;
			}
		}
		for(int q = nLen2; q <= nLen1 - 1; q++)
			c[q] = a[q];
		for(int l = nLen1 - 1; l >= 0; l--)
			cout << c[l];
		cout << endl;
	}





	
	return 0;
}
