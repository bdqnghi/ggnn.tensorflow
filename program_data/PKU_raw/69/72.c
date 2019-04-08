//POJ ?? 2981 ?????
int main()
{
	char A[300] , B[300];
	int a[300]={0} , b[300]={0} , c[320] = {0}; 
	memset(A,' ',sizeof(B));
	memset(B,' ',sizeof(B));
	cin.getline(A,300);
	cin.getline(B,300);
	int x = strlen(A) , y = strlen(B) ;
	for(int i = x-1; i>=0 ; i--){
		if(A[i]==' ');
		else
			a[x-i] = A[i] - '0';//??A?(?A[0]??)123456??a?(?a[0]??)0654321
	}
	for(int j = y-1; j>=0 ; j--){
		if(B[j]==' ');
		else
			b[y-j] = B[j] - '0';
	}
	for(int k = 0 ; k<x+y ; k++){
		c[k] += a[k] + b[k];
		c[k+1] += c[k]/10;
		c[k] %= 10;
	}
	int remember = 0 ;
	for(int l = x+y ; l>=0 ; l--){
		if(c[l] != 0){
			remember = l ;
			break;
		}
	}
	for(int m = remember ; m>0 ; m--)
		cout<<c[m];
	if(remember==0)
		cout<<0;
	cout<<endl;
	return 0 ;
}