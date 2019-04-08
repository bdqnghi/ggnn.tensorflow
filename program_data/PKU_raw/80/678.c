
int main()
{   
	int year[2]={365,366};
	int ym[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
	int sta=0,end=0;
	int stay,stam,stad,endy,endm,endd;
	int y,m;
	cin>>stay>>stam>>stad;
	cin>>endy>>endm>>endd;

	y=0;
	m=1;
	while(y<stay)
	{  
		sta=sta+year[(y%4==0&&y%100!=0)||(y%400==0)];
        y++;
	}
	while(m<stam)
	{
		sta=sta+ym[(y%4==0&&y%100!=0)||(y%400==0)][m];
		m++;
	}
	sta=sta+stad;
   
	y=0;
	m=1;
	while(y<endy)
	{  
		end=end+year[(y%4==0&&y%100!=0)||(y%400==0)];
        y++;
	}
	while(m<endm)
	{
		end=end+ym[(y%4==0&&y%100!=0)||(y%400==0)][m];
		m++;
	}
	end=end+endd;
    
	cout<<end-sta<<endl;
	return 0;
}

