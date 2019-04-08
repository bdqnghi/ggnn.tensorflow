int main()                                  //?????
{                                           //?????
	int a[100][100]={0};                    //????a
	int b[100][100]={0};                    //????b
	int c[100][100]={0};                    //????c
	int i,j,k,l,m,n,o;                      //????
	int num=0;                              //????
	cin>>i>>j;                              //??
	for(m=0;m<i;m++)                        //a?????
	{
		for(n=0;n<j;n++)
			cin>>a[m][n];
	}
	cin>>k>>l;                             //??
	for(m=0;m<k;m++)                       //b?????
	{
		for(n=0;n<l;n++)
			cin>>b[m][n];
	}
	for(m=0;m<i;m++)                       //????
	{
		for(n=0;n<l;n++)
		{
			for(o=0;o<j;o++)
				c[m][n]=c[m][n]+a[m][o]*b[o][n];
		}
	}
	for(m=0;m<i;m++)                      //????
	{
		for(n=0;n<l;n++)
		{
			if(num<l-1)
			{
				cout<<c[m][n]<<" ";
				num++;
			}
			else if(num<l)
			{
				cout<<c[m][n]<<endl;
				num=0;
			}
		}
	}
	return 0;                             //?????
}
		
