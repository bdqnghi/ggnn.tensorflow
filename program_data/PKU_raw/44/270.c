void fan(int a);      //??????
int main()
{
	int i,a;
	for(i=1;i<=6;i++)              //????
	{cin>>a;if(a>=0)fan(a);
	else a=-a,cout<<"-",fan(a);}//????

}
void fan(int a)
{int j=1;
	if(a>0)
	{ while(a!=0)
	   { if(a%10||(a%10==0&&j!=1))
		cout<<a%10,j++;
	    a=a/10;
		if(a%10!=0)
			j++;
	}cout<<endl;}
	if(a=0)
		cout<<"0"<<endl;
	
}