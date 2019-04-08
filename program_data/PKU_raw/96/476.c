int main(){
	char a[100],b[100];                    //b[100]??
	int n,m,i,x=0,w;                       //n???
	while(cin>>a)
	{
		n=a[0]-48;
		b[0]=48;
		m=strlen(a);

		for(i=1;i<m;i++)
		{
			n=n*10+((int)a[i]-48);         
			b[i]=n/13+48;
			n=n%13;                        //??????
		}
		b[m+1]=0;
		w=strlen(b);
		if(w<=2)                                              //????????0
		{
			cout<<0<<endl;
			cout<<n<<endl;
		}
		else if(w<=3&&(int)a[0]-49==0&&(int)a[1]-50<=0)       //???????10,11,12,??2??????0
		{
			cout<<0<<endl;
			cout<<n<<endl;
		}
		else                                                  //?????
		{
		if(b[0]-48==0)x=1;                           
		if(b[1]-48==0)x=2;
		for(i=x;i<m;i++)
		{
			cout<<b[i];
		}
		cout<<endl;
		cout<<n<<endl;
		}
	}
	return 0;
}
