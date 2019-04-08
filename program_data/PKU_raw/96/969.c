
int main()
{
	char a[110];
	int n,i,j,b[110],c[110],sum = 0;
	cin >> a;
	//memset(b,0,sizeof(b) );
	n = strlen(a);
	if (n == 1)  {cout << '0' << endl;cout << a[0];return 0;}
	
	if (n>=2){
	for ( i = 0; i < n; i ++)
	{
		b[i] = a[i] - '0';
	}
	if (n == 2 && ( b[0]*10 + b[1] ) < 13)  {sum = b[0]*10+b[1];cout << '0' <<endl;cout <<  sum<<endl;return 0;}
	sum = b[0]*10 + b[1] ;
	j = 0;
	if (sum > 12)  {c[j] = sum / 13;j ++ ;sum = sum % 13;}
	if (n > 1){
	for ( i = 2; i < n; i ++)
	{
		sum = sum * 10 + b[i];
		
			c[j] = sum / 13;
			sum = sum % 13;
			j ++;
			//cout <<c[j-1] << ' '<< sum <<endl;
		
	}
	for (i = 0 ; i < j; i ++)  cout << c[i];
	cout << endl;
	cout << sum;
	}
		}
	return 0;
} 