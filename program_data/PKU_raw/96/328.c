int main()
{
	char shu[101];
	int num[101]={0},result[101]={0};
	int i,j,yushu,flag=0;
	cin.getline ( shu,101);
	for( i=0; shu[i] != '\0'; i++ )
	{
	  num[i] = shu [i] - '0' ;
	}
  





		for ( i = 0; shu[i] != '\0'; i++ )
	{
		result[ i ] = num[i] / 13;
		num [i+1] = num [i+1] + ( num[i] % 13 ) * 10;
	}
	yushu = num[i-1] % 13 ;
    

		for ( j=0; shu[j]!='\0';j++ )
	{
		if(result[j] !=0)
		{
        flag=1;
        break;
		}}
		if (flag){

for ( ;shu[j]!='\0'; j++ )
	{
		cout<<result[j];
	}
}
else cout<<"0"<<endl;
cout<<endl<<yushu<<endl;
			return 0;
}