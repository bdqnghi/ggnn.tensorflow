/**  
* @file   ????? .cpp  
* @author ???  
* @date   2013-10-31
* @description 
*          ??????: ?????   */ 
int main()
{
	int a[1001],b[1001];
	int i=1 ;
	do
	{
		cin>>a[i];
		i++;
	}while(cin.get()==',') ;
    int j=1 ;
	do
	{
		cin>>b[j];
		j++;
	}while(cin.get()==',');
	cout<<(i-1)<<" ";
	int num=0,num1=INT_MIN;
	for(int h=1;h<=1000;h++)
	{
		num=0;
		for(int p=1;p<=i;p++)
		{
			if((h>=a[p])&&(h<b[p]))
				num++;
		}
		if(num>num1)
			num1=num;
	}
	cout<<num1;
	return 0;
}