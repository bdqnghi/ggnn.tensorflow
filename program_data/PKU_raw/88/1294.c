
int main( )
{	
	char test[MAX_LENGTH];
	char *pTest=test;
	cin.getline(test,MAX_LENGTH);
	while(true) //??????
	{

		if(*pTest==0) break;

		if (*pTest>='0'&&*pTest<='9')  //????
		{
			cout<<*pTest;
			if (*(pTest+1)<'0' ||*(pTest+1)>'9')
				cout<<endl;
		}
		pTest++;
	}
	return 0;
}
