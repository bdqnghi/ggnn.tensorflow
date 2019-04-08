int main()
{
	int w,day=0,a[12];
	cin>>w;
	a[0]=a[2]=a[4]=a[6]=a[7]=a[9]=a[11]=31;        //:???????????
	a[3]=a[5]=a[8]=a[10]=30;
	a[1]=28;
	if (w==7)
	{
		cout<<"1"<<endl;
	    cout<<"10"<<endl;
	}
	else
	{
		for (int i=0;i<11;i++)             //:????1??1?1?????????1???????13????
		{  
			day=day+a[i];
		if ((day-7+w)%7==0)
			cout<<i+2<<endl; 
		}
	}
		return 0;
}
