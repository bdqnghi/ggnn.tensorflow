/*************************************************************************************************************
* @file .cpp
* @author ????
* @date 
* @description
*		????        
*/


char b[100];
int a[100], i, j;
void peidui( int l)
{
	int flag = 0;
	if(l == 0)
		return;
	for(i = 0; i < l - 1; i++)
	{
		if((b[i] == b[0]) && (b[i + 1] != b[0]))//????????????????
		{
			cout << a[i] << " " << a[i + 1] << endl;
			for(j = i; j < l - 2; j++)
			{
				a[j] = a[j + 2];
				b[j] = b[j + 2];
			}
			break;
		}
	}
	peidui(l - 2);
}
int main()
{
	int l;
	cin >> b;
	l = strlen(b);
	for (i = 0; i < l; i++)
		a[i] = i;
	peidui(l);
	return 0;
}