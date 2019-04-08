/*
 *????reversal.cpp
 *??:???
 *?????2012-11-10
 *???????
 */



int main()
{
	int i,j,n=-1;
	char temp[101],word[101][101]; // word????
	while (cin >> temp)
		strcpy(word[++n],temp); // ?????????
	for (i=0,j=n;i<j;i++,j--) // ?????
	{
		strcpy(temp,word[i]); // ??
		strcpy(word[i],word[j]);
		strcpy(word[j],temp);
	}
	for (i=0;i<n;i++) // ??
		cout << word[i] << ' ';
	cout << word[n] << endl;
    return 0;
}