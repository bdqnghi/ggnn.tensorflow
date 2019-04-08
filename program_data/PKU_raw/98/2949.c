//============================================================================
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


int length=0;

void itype(char a[1000][50],int i)//?????
{
	int b=strlen(a[i]);//????
	if(length==0)//????????
		cout<<a[i];
	else if(length+b+1<=80)//?????
	{
		cout<<" "<<a[i];
		length++;
	}
	else//????
	{
		cout<<endl<<a[i];
		length=0;
	}
	length+=b;
}

int main() {
	int n;
	cin>>n;
	char character[1000][50];
	for(int i=0;i<n;i++)//?????
	{
		cin>>character[i];
		itype(character,i);
	}
	return 0;
}