/*
 * 1.cpp
 *
 *  Created on: 2011-12-19
 *      Author: 1100012870
 */
char s[501];

void print(int x,int y)         //??????s???x??y?????
{
	int i;
	for(i=x;i<=y;i++)cout<<s[i];
	cout<<endl;
}

int check(int x,int y)          //?????????????
{
	while(x<y && s[x]==s[y]){   //????????????
		x++;
		y--;
	}
	if(x>=y) return 1;
	return 0;
}

int main()
{
	int i,j,l;
	cin.getline(s,501);
	l=strlen(s);
	for(i=1;i<=l;i++)          //????2???????
		for(j=0;j<l;j++)
			if(j+i<l && check(j,j+i)==1)
				print(j,j+i);
	return 0;
}
