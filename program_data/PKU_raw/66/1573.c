

int main()
{
	//while(1)
	//{
	int y,m,d;
	cin>>y>>m>>d;
	int sum=0;
	if(y>400&&y%400!=0)
		y=y%400;
	for(int i=1;i<y;i++)
	{
		int total=365;
		if(((i%4==0)&&(i%100!=0))||(i%400==0))
			total=366;
		sum+=total;
		if(sum>7)
			sum=sum%7;
	}
	int e[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if(((y%4==0)&&(y%100!=0))||(y%400==0))
		e[2]=29;
	for(int i=0;i<m;i++)
		sum+=e[i];
	sum+=d;
	sum=sum%7;
	if (sum==0)
		cout<<"Sun."<<endl; 
	if (sum==1)
		cout<<"Mon."<<endl; 	
	if (sum==2)
		cout<<"Tue."<<endl; 	
	if (sum==3)
		cout<<"Wed."<<endl; 	
	if (sum==4)
		cout<<"Thu."<<endl; 	
	if (sum==5)
		cout<<"Fri."<<endl; 	
	if (sum==6)
		cout<<"Sat."<<endl; 

	//}
 return 0;

}


