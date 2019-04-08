


int main()
{
	int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},m,i,j,day=0;
	cin>>m;                                 //???????m?
	for(i=1;i<=12;i++)
	{
		day=0;
                j=1;
		while(j<=i-1)
		{
            day+=month[j];
			j++;
		}
		day+=13;
        if((day+m-6)%7==0) cout<<i<<endl;
	}
 return 0;
}
