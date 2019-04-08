int play(int a, int* blank1, int* blank2,int bad);

int main()
{
	char a[100];
	cin >> a;
	int blank1[100];
	int blank2[100];
	memset(blank1,-1,99 * sizeof(int));
	memset(blank2,-1,99 * sizeof(int));
	int w = 0,j = 0;
	for (;w < 100;w++)
	{
		if(a[w] != a[0])
		{
			blank1[j] = w;
			blank2[w] = j;
			j++;
		}
	}
if(j == 0)cout << j;
int i = 0;
	for (;i < j; i++)
	{
		cout << play(blank1[i],blank1,blank2,0) << ' ' << blank1[i] <<endl;
	}
if(i == 0)cout << i;
}

int play(int a, int* blank1, int* blank2,int bad)
{
	if(blank2[a - 1] == -1 && bad == 0)
		return a - 1;
	else if(blank2[a - 1] == -1 && bad != 0)
		return play(a - 1,blank1,blank2,bad-1);
	else
		return play(a - 1,blank1,blank2,bad+1);
}