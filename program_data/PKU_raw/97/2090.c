

int main()
{
	int input,hundred,fifty,twenty,ten,five;
	cin>>input;
	hundred=(input-input%100)/100;
	input=input-hundred*100;
	fifty=(input-input%50)/50;
	input=input-fifty*50;
	twenty=(input-input%20)/20;
	input=input-twenty*20;
	ten=(input-input%10)/10;
	input=input-ten*10;
	five=(input-input%5)/5;
	input=input-five*5;
	cout<<hundred<<endl<<fifty<<endl<<twenty<<endl<<ten<<endl<<five<<endl<<input<<endl;
	return 0;}