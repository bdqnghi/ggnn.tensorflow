//****************************************
//*????                      **
//*??? 1100012927              **
//*2011.11.13                     **
//****************************************
int f(char[], int, int, int);
int k;
int main()
{
    int i = 1, b, j = 0;
    char a[500];
    cin.getline(a,500);
	for (j = 0; a[j] != '\0'; j++);
    for (i = 1; i < j + 1; i++)
    {
        for (b = 0; b < j - i; b++)
        {
            if (f(a, i, b, j))
            
            {
                for (k = 0; k <= i; k++)
                {
                    cout << a[b + k];
                }
                cout << endl;
            }
        }
    }
	return 0;
}
int f(char a[], int i, int b, int j)
{
    if (a[b] == a[b + i])
    {
        if (i != 1 && i != 2)
        {
            i = i - 2; b++;
            if(f(a, i, b, j))
                return 1;
            else 
                return 0;
        }
        
        return 1;
    }
    else
    {
        
        return 0;
    }
}