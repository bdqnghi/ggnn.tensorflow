/*
 * 3704:??????
 *
 *  Created on: 2012-12-1
 *      Author: zhuyongfu
 */


char s[101];//?????????????
int l;//??????
int f(int k){//????
	int i,j;
	for(i = k;i >= 0;i--)//??????
		if(s[i] == '(')
		{
			for(j = i + 1;j < l;j++)
				if(s[j] == ')')//????????????
				{
						s[i] = 'a';//?????????
						s[j] = 'a';
						k = i;
						return f(k);//??
				}
		}
	for(i = 0;i < l;i++)//??
	{
		if(s[i] == '(')
			cout << '$';
		else if(s[i] == ')')
			cout << '?';
		else
			cout << ' ';
	}
	cout << endl;
	return 0;
}

int main(){
	while(cin.getline(s,101,'\n')){//??
		l = strlen(s);
		cout << s << endl;
		f(l - 1);//????
		memset(s,'\0',sizeof(s));//??
	}
	return 0;
}