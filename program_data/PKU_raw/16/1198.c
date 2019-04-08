int main()
{
	int num,temp,ge,shi,bai,qian;
	cin>>num;
	temp=num;
	if(num==10000) cout<<"00001"<<endl;
	else if(num==0) cout<<"0"<<endl;
	else{
		qian=temp/1000;
	    temp=temp-qian*1000;
	    bai=temp/100;
	    temp=temp-bai*100;
	    shi=temp/10;
	    ge=temp-shi*10;
		if(num>=1&&num<=9) cout<<ge<<endl;
		else if(num>=10&&num<=99) cout<<ge<<shi<<endl;
		else if(num>=100&&num<=999) cout<<ge<<shi<<bai<<endl;
		else cout<<ge<<shi<<bai<<qian<<endl;
	}
	return 0;
}