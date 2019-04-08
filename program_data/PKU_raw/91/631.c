/**
* @file homework.cpp
* @author ??
* @date 2010?12?15
* @description
* ??????:????????? 
*/
int main()
{
	int i, length;
	char zifu[101];
	cin.getline(zifu,101,'\n');
	length = strlen(zifu);
	for (i=0;i<length;i++)
	{
		if (i==length-1)
			cout << (char)(zifu[i] + zifu[0]);
		else
			cout << (char)(zifu[i] + zifu[i+1]);
	}
	return 0;
}
