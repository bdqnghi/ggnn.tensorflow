int main()
{
	int n=0,line=0,row=0;
	int a[102][102];
	cin >>n;
	for (int i=0;i<n;i++)
	{
		cin >>line >>row;
		for (int j=0;j<line;j++)                                        //??
		{
			for (int k=0;k<row;k++)
				cin >>*(*(a+j)+k);
		}
		if (line==1&&row==1) {cout <<**a <<endl;continue;} 
		int plus=**a+*(*a+row-1)+**(a+line-1)+*(*(a+line-1)+row-1) ;    //?????????
		for (int j=1;j<line-1;j++)                                      //?????
			plus+=**(a+j)+*(*(a+j)+row-1);
		for (int j=1;j<row-1;j++)                                       //?????
			plus+=*(*a+j)+*(*(a+line-1)+j);
		cout <<plus <<endl;
	}
	return 0;
}