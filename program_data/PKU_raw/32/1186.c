int main ()
{
	int n , i , j , k,num1[101]={0},num2[101]={0},res[101]={0} ;
	cin >> n ;
	cin.get();
	char str1[101] , str2[101] ;
	for (i = 0 ;i < n ;i++)
	{
		memset(num1 , 0 , sizeof(num1)) ;
		memset(num2 , 0 , sizeof(num2)) ;
		memset(res , 0 , sizeof(res)) ;
		cin.getline(str1,101) ;
		cin.getline(str2,101) ;
		cin.get() ;
		for (j = 0 ; j < strlen(str2) ; j++ )
			num2[j] = str2[strlen(str2)-j-1]-'0' ;
		for (j = 0 ; j < strlen(str1) ; j++ )
			num1[j] = str1[strlen(str1)-j-1]-'0' ;
		for(k = 0 ; k < strlen(str1) ; k++)
		{
			if(num1[k]-num2[k]<0)
			{
				res[k]=num1[k]-num2[k]+10;
				num1[k+1]-- ;
			}
			else res[k]=num1[k]-num2[k] ;
		}
		for(k = strlen(str1)-1  ; k >= 0 ; k--)
		{
			if(res[k]==0) 
				continue ;
			break ;
		}
		while (k >=0 )
		{
			cout << res[k];
			k-- ;
		}
		cout << endl;
	}
	return 0 ;
}


