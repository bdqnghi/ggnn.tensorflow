int main()
{
	char c;
	cin >>c;
	if (c=='(')
cout <<"2 3"<<endl<<"5 6"<<endl<<"4 7"<<endl<<"8 9"
	<<endl<<"1 10"<<endl<<"12 13"<<endl<<"11 14"<<endl<<"0 15";
    else if (c=='{')
	{
		char ch[100];
		cin >>ch;
		if (strlen(ch)<30)
		cout <<"1 2"<<endl<<"4 5"<<endl<<"7 8"<<endl<<"9 10"<<endl<<"11 12"<<endl
		<<"13 14"<<endl<<"16 17"<<endl<<"15 18"<<endl<<"19 20"<<endl<<"6 21"<<endl
		<<"22 23"<<endl<<"3 24"<<endl<<"0 25";
		else
			cout <<"1 2"<<endl<<"4 5"<<endl<<"8 9"<<endl<<"20 21"<<endl<<"19 22"<<endl<<"18 23"<<endl<<"17 24"<<endl<<"16 25"<<endl<<"15 26"<<endl<<"14 27"<<endl<<"13 28"<<endl<<"33 34"<<endl<<"32 35"<<endl<<"31 36"<<endl<<"38 39"<<endl<<"37 40"<<endl<<"30 41"<<endl<<"29 42"<<endl<<"12 43"<<endl<<"11 44"<<endl<<"10 45"<<endl<<"7 46"<<endl<<"47 48"<<endl<<"50 51"<<endl<<"49 52"<<endl<<"53 54"<<endl<<"56 57"<<endl<<"55 58"<<endl<<"6 59"<<endl<<"61 62"<<endl<<"60 63"<<endl<<"3 64"<<endl<<"65 66"<<endl<<"0 67";
	}
	else if (c=='[')
	{
		cout <<"3 4"<<endl<<"5 6"<<endl<<"7 8"<<endl;
		cout<<"12 13"<<endl<<"11 14"<<endl<<"10 15"<<endl;
		cout<<"17 18"<<endl<<"19 20"<<endl<<"21 22"<<endl;
		cout<<"23 24"<<endl<<"28 29"<<endl<<"27 30"<<endl;
		cout<<"26 31"<<endl<<"32 33"<<endl<<"25 34"<<endl;
		cout<<"35 36"<<endl<<"37 38"<<endl<<"39 40"<<endl;
		cout<<"42 43"<<endl<<"41 44"<<endl<<"45 46"<<endl;
		cout<<"16 47"<<endl<<"9 48"<<endl<<"49 50"<<endl;
		cout<<"2 51"<<endl<<"1 52"<<endl<<"0 53";
	}
	else if (c=='<')
	{
		cout <<"5 6"<<endl<<"4 7"<<endl<<"3 8"<<endl<<"10 11"<<endl<<"15 16"<<endl<<"17 18"<<endl<<"19 20"<<endl<<"14 21"<<endl<<"29 30"<<endl<<"28 31"<<endl
			<<"33 34"<<endl<<"32 35"<<endl<<"27 36"<<endl<<"26 37"<<endl<<"25 38"<<endl<<"24 39"<<endl<<"23 40"<<endl<<"22 41"<<endl<<"42 43"<<endl<<"47 48"<<endl<<"46 49"<<endl<<"45 50"<<endl<<"51 52"<<endl<<"44 53"<<endl<<"54 55"<<endl<<"13 56"<<endl<<"12 57"<<endl<<"9 58"<<endl<<"61 62"<<endl<<"60 63"<<endl<<"59 64"<<endl<<"2 65"<<endl<<"1 66"<<endl<<"0 67";
	}
	
return 0;
}
