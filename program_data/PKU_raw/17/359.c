/*
 * 1.cpp
 *
 *  Created on: 2012-11-23
 *      Author: 12066
 */

char a[200];
int x=0, y=0;
void find(int min)//??????
{
	if( min>0 )
	{
		int p=-1;
		for( int i=0; i<strlen(a); i++ )
		{
			if(a[i]==')' && p>=0 )//??????????????
			{
				a[p]='a';
				a[i]='b';
				break;
			}
			else if( a[i]=='(')
			{
				p=i;
			}
		}
		find( min-1 );//????
	}
}
void change()//????????
{
	for( int i=0; i<strlen(a); i++ )
	{
		if( a[i]=='(' )
			a[i]='$';
		else if( a[i]==')' )
			a[i]='?';
		else
			a[i]=' ';
	}
}
void qingling()//??
{
	for( int i=0; i<strlen(a); i++ )
	{
		a[i]='\0';
	}
}
int main()
{
	while(cin.getline(a, 101)){
	cout << a << endl;
	for( int i=0; i<strlen(a); i++ )//??????????
	{
		if( a[i]=='(' )
			x++;
		if( a[i]==')' )
			y++;
	}
	int min=0;
	if( x<y )
		min=x;
	else
		min=y;
	find(min);//??
	change();//???
	cout << a << endl;//??
	qingling();
	x=0;
	y=0;
	}
	return 0;
}