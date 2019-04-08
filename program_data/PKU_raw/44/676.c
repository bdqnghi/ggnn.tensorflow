int f=0;
void reserve(int num)
{
		num=abs(num);
		if((num%10)!=0){
			cout<<num%10;f = 1;
		}
		if(num%10==0&&f==1)
		{
			cout<<"0";
		}
		if(num/10 >0)
		reserve(num/10);

	
}
int main()
{
	int i,num;
	for(i=0;i<6;i++)
	{
f=0;		
cin>>num;
		if(num<0){
		num=0-num;
		cout<<"-";
		}
		reserve(num);
		cout<<endl;
	}
	return 0;
}

