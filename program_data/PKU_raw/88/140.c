/*
 * 1.cpp
 *
 *  Created on: 2011-12-25
 *      Author: Administrator
 */
char a[50];
void print(int x, int y)
{
	if(x>y) return;
	int i;
	for(i=x;i<=y;i++)
		cout<<a[i];
	cout<<endl;
}

int main()
{

	int i,k,l;
	gets(a);
	l=strlen(a);
	k=0;
	for(i=0;i<l;i++){
		if(a[i]<='9' && a[i]>='0') continue;
		print(k,i-1);
		k=i+1;
	}
	print(k,i-1);
	return 0;
}