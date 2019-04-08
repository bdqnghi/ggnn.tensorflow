//============================================================================
// Name        : array0213.cpp
// Author      : 1300012911
// Version     : 20131113,Wed,10th week
// Copyright   :
// Description : ????
//============================================================================


int main() {
	int i = 0;
	int len = 0;
	int l = -1;
	int num = 0;//????
	int front = 0,back = 0;//???????????????
	char s[101];//?????
	char a[100][100];//????
	//??????11???
	cin.getline(s,101);
	len = strlen(s);
	front = 0;
	while (s[front] == ' ') front++;
	back = len-1;
	while (s[back] == ' ') back--;
	for (i = front;i <= back;i++)
		if (s[i] != ' ')
		{
			l++;
			a[num][l] = s[i];
		}
		else if (s[i-1] != ' ')
		{
			l++;
			a[num][l] = '\0';
			num++;
			l = -1;
		}
	l++;
	a[num][l] = '\0';
	num++;
	//????
	for (i = num-1;i >= 0;i--)
		if (i == 0) cout << a[i];
		else cout << a[i] << ' ';
	return 0;
}
