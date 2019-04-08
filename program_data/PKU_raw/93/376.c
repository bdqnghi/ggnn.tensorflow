int main() 
{
	int Number;
	cin>>Number;
	if(Number%3==0&&Number%5==0&&Number%7==0)
	cout<<3<<" "<<5<<" "<<7<<endl;
	if(Number%3==0&&Number%5==0&&Number%7!=0)
	cout<<3<<" "<<5<<endl;
	if(Number%3==0&&Number%5!=0&&Number%7==0)
	cout<<3<<" "<<7<<endl;
	if(Number%3!=0&&Number%5==0&&Number%7==0)
	cout<<5<<" "<<7<<endl;
    if(Number%3!=0&&Number%5!=0&&Number%7==0)
    cout<<7<<endl;
     if(Number%3!=0&&Number%5==0&&Number%7!=0)
    cout<<5<<endl;
     if(Number%3==0&&Number%5!=0&&Number%7!=0)
    cout<<3<<endl;
    if(Number%3!=0&&Number%5!=0&&Number%7!=0)
    cout<<"n"<<endl;
	cin.get();	cin.get();	cin.get();	cin.get();
	return 0;
}