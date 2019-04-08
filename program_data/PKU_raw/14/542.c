
struct student
{
	int num ;
	int chinese ;
	int math ;
	int sum ;	
}s[100001] , first , second , third ; //??????? ?? ?? ?? 

int main()
{
	int n , i , temp1 , temp2 ;
	cin >> n ;
	for (i = 0 ; i < n ; i++)
	{
		cin >> s[i].num >> s[i].chinese >> s[i].math ;
		s[i].sum = s[i].chinese + s[i].math ;   //??=????? 
	}
	first.sum = 0 , second.sum = 0 , third.sum = 0 ; //???????
	for (i = 0 ; i < n ; i++)
	{
		if (first.sum < s[i].sum)
		{
			first = s[i] ;
			temp1 = i ;     //????????? 
		}	
	}
	for (i = 0 ; i < n ; i++)
	{
		if (second.sum < s[i].sum && s[i].num != s[temp1].num) //???????????????????????????? 
		{	
			second = s[i];
			temp2 = i ;
		}	
	}
	for (i = 0 ; i < n ; i++)
		if (third.sum < s[i].sum && s[i].num != s[temp1].num && s[i].num != s[temp2].num)  //????? 
			third = s[i];
	cout << first.num << " " << first.sum << endl ;
	cout << second.num << " " << second.sum << endl ;
	cout << third.num << " " << third.sum << endl ;
	return 0 ;	
}
