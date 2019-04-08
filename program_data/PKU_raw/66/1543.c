int main()
{
	int year[2]={365,366};
	int month[2][12]={3,0,3,2,3,2,3,3,2,3,2,3,3,1,3,2,3,2,3,3,2,3,2,3};
	int y,m,d;
	cin>>y>>m>>d;
    int i;
	int sum=0;
	sum+=((y-1)/4)*5;
	sum%=7;
	sum+=((y-1)/100)*6;
	sum%=7;
	sum+=((y-1)/400);
	sum%=7;
	for(i=((y-1)/4)*4+1;i<y;i++){
		if((i%4==0&&i%100!=0)||i%400==0){
	    	sum+=2;
			sum%=7;
		}
    	else{
	    	sum++;
			sum%=7;
		}
	}
	int type;
	if((y%4==0&&y%100!=0)||y%400==0){
		type=1;
	}
	else{
		type=0;
	}
	for(i=0;i<m-1;i++){
	    sum+=month[type][i];
		sum%=7;
	}
	sum+=d;
	sum+=6;
	sum%=7;
	if(sum==0){
		cout<<"Mon."<<endl;
	}
	else if(sum==1){
		cout<<"Tue."<<endl;
	}
	else if(sum==2){
		cout<<"Wed."<<endl;
	}
	else if(sum==3){
		cout<<"Thu."<<endl;
	}
	else if(sum==4){
		cout<<"Fri."<<endl;
	}
	else if(sum==5){
		cout<<"Sat."<<endl;
	}
	else if(sum==6){
		cout<<"Sun."<<endl;
	}
	return 0;
}