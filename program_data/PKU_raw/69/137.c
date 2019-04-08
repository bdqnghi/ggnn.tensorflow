int main()
{
	const int max = 251 ;
	int an1[251] = {0} , an2[251] = {0} ;
	char line1[251] = {0},line2[251] = {0} ;
	cin>>line1 ;
	cin>>line2 ;
	int lenth1 = strlen(line1) ;
	int lenth2 = strlen(line2) ;
	int i = 0 , j = 0 ;
	for(i = lenth1 - 1 ; i>= 0 ; i--)
	{
		an1[j++] = line1[i] - '0' ;
	}
	for(i = lenth2 - 1 , j = 0 ; i>= 0 ; i--)
	{
		an2[j++] = line2[i] - '0' ;
	}
	int flag = 0 ;
	for(i = 0 ; i<max ; i++)
	{
		an1[i] = an1[i] +an2[i] ;
		if(an1[i]>=10)
		{
			an1[i+1] += an1[i]/10 ;
			an1[i] = an1[i]%10 ;
		}
		if(an1[i])
			flag = i ;
	}
	for(j = flag ; j>=0 ; j--)
		cout<<an1[j] ;
	return 0 ;
}



