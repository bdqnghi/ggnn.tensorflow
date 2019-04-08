int main()
{
	int num=0,ge=0,shi=0,bai=0,qian=0,wan=0;      //ge=???????????num??????
	cin>>num;
	wan=num/10000;           
	qian=(num-wan*10000)/1000;
	bai=(num-wan*10000-qian*1000)/100;
	shi=(num-wan*10000-qian*1000-bai*100)/10;
	ge=(num-wan*10000-qian*1000-bai*100-shi*10);  //??????????
	if(shi==0)
		cout<<ge<<endl;
	else if(bai==0)
		cout<<ge<<shi<<endl;
	else if(qian==0)
		cout<<ge<<shi<<bai<<endl;
	else if(wan==0)
		cout<<ge<<shi<<bai<<qian<<endl;
	else
		cout<<ge<<shi<<bai<<qian<<wan<<endl;     //?????????
	return 0;
}