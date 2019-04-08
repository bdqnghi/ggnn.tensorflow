int main()
{
	int num=0;                 //???????num
    
	cin>>num;
	if (num%3==0&&num%5==0&&num%7==0)     //??num???3,5,7???????
		cout<<"3"<<" "<<"5"<<" "<<"7"<<endl;
	else if (num%3==0&&num%5==0&&num%7!=0)
		cout<<"3"<<" "<<"5"<<endl;
	else if (num%3==0&&num%5!=0&&num%7==0)
		cout<<"3"<<" "<<"7"<<endl;
    else if (num%3!=0&&num%5==0&&num%7==0)
		cout<<"5"<<" "<<"7"<<endl;
	else if (num%3==0&&num%5!=0&&num%7!=0)
		cout<<"3"<<endl;
	else if (num%3!=0&&num%5==0&&num%7!=0)
		cout<<"5"<<endl;
	else if (num%3!=0&&num%5!=0&&num%7==0)
		cout<<"7"<<endl;
	else if (num%3!=0&&num%5!=0&&num%7!=0)
		cout<<"n"<<endl;
    return 0;


}