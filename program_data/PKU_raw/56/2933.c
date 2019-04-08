int main()                                         //???
{
	int n,a[5];
	cin>>n;                                        //???????
	for (int j=0;j<5;j++)
        {
           a[j]=n%10;
           n=n/10;
         }
	for (int i=0;i<5;i++)
	{
           if(a[i]>0)
		cout<<a[i];
	}                                            //??????????0???????
	
	return 0;
}

