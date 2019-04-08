//============================================================================
// Name        : kuohaopipei.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

char s[1000];

int findri(int x,int y)
{  int p;
	if(s[x]=='\0')return -1;
	if(s[x]=='(')
	  {
		p=findri(x+1,y+1);
		if(p==-1){s[x]='$';return -1;}
		else {s[x]=' ';return findri(p+1,y);}
	  }
		else if(s[x]==')')
	   {
		if(y==0){s[x]='?';return findri(x+1,y);}
		else {s[x]=' ';return x;}

		}
	else {s[x]=' ';return findri(x+1,y);}





	  }








int main() {
	int len;
	int i;
	while(cin>>s)
	{len=strlen(s);
	for(i=0;i<len;i++)
	cout<<s[i];
	cout<<'\n';
	findri(0,0);
	for(i=0;i<len;i++)
	cout<<s[i];
	cout<<'\n';}

	return 0;
}
