//********************************
//*?????(4-4) ??3?5?7????   **
//*?????? 1300012745 **
//*???2013.9.27  **
//********************************
int main()
{
	int number;
	cin>>number;
	if (number%3==0&&number%5==0&&number%7==0)
		cout<<"3 5 7"<<endl;
	else if (number%3==0&&number%5==0)
		cout<<"3 5"<<endl;
	else if (number%3==0&&number%7==0)
		cout<<"3 7";
	else if (number%5==0&&number%7==0)
		cout<<"5 7";
	else if (number%3==0)
		cout<<"3";
	else if (number%5==0)
		cout<<"5";
	else if (number%7==0)
		cout<<"7";
	else
		cout<<'n';
	cin.get();cin.get();
	return 0;
}

