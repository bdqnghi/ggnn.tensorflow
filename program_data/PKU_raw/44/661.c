int main()
{
    int reverse(int num);
    int num1[7],num2[7];
    for(int i=1;i<=6;i++)
    {
       cin>>num1[i];
       num2[i]=reverse(num1[i]);
    }
    
       return 0;
}

int reverse(int num)
{ 
	int i=0,p=0;
	if(num>0)
	{
	   while(num!=0)
		{
			i=num%10;
			num=num/10;
			if(i!=0)
			p=1;
			if(i==0&&p==0)
				continue;
			else
            cout << i;
		}
		cout<<endl;
    }
    else 	if(num==0)
		cout<< 0<<endl;
    else	if(num<0)
	{
		num=-num;
		cout<<"-";
		while(num!=0)
		{
			i=num%10;
			num=num/10;
			if(i!=0)
			p=1;
			if(i==0&&p==0)
			   continue;
			else
			
			cout << i;
      }
      cout<<endl;
	}
	return (num);
}


  