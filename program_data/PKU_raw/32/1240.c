//********************************
//*????????  **
//*????? 1300012845 **
//*???2013.11.15  **
//********************************
int main ()
{
	int n, i, j, k, u=1;
	int l1, l2, flag=0;
	char str1[102] = {0}, str2[102] = {0};
	int out[102]={0};
	int num1[103]={0}, num2[103]={0};
	cin >> n;
	for ( k = 1; k <= n; k++ )
	{
		flag = 0;//????????
		cin >> str1 >> str2;
		l1 = strlen(str1);
		l2 = strlen(str2);
		u=1;
		memset(out,0,102);//??????
		for ( i = 0; i <= l1-1; i++ )
			num1[i+1] = str1[i] - '0';//????????
		for ( i = 0; i <= l2-1; i++ )
			num2[i+1] = str2[i] - '0';//????????
		while ( u <= l1 && u <= l2)
		{
			out [u] = num1[l1 - u + 1] - num2 [l2 - u + 1];//?????????????
			u++;
		}
		for ( u= l1; u >= l2+1; u-- )
			out[u] = num1[l1 - u + 1];//??????????????
		for ( i =1; i <= l1-1; i++ )
		{
			if ( out [i] <0 )//???????+10???
				out[i+1]+=-1, out[i]+=10;
		}
		for ( u = l1; u >=1 ; u-- )
		{
			if ( out[u] != 0)
				flag = 1;//????????????????
			if( flag ) cout << out[u] ;
			if ( u==0)
				break;
		}
		cout << endl;
	}
	return 0;
}