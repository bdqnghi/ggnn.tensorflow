int main()
{
int i;
cin >> i;
if(!(i % 3) && !(i % 5) && !(i % 7))
        cout << "3 5 7" << endl;
		else if(!(i % 3) && !(i % 5))
            cout << "3 5" << endl;
			else if(!(i % 5) && !(i % 7))
          cout << "5 7" << endl;
		  else if(!(i % 3) && !(i % 7))
         cout << "3 7" << endl;
		 else if(!(i % 3))
        cout << "3" << endl;
		else if(!(i % 5))
      cout << "5" << endl;
	  else if(!(i % 7))
     cout << "7" << endl;
     else cout << "n";
     return 0;
} 
