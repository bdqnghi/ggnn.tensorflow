/**
* file homwork.cpp
* author ???
* data 2011-11-14
* description ????
*/ 

int length , i ;
char n[1000];         //??????
unsigned turn(int n1 , char a[]);
void f(int n2 , unsigned s , int j);

int main()
{
	int a , b ;
	unsigned number;
	char str[1000] ; 
	while(cin >> a)
	{
		cin >> str >> b ; 
		length = strlen (str) ;
		number = turn( a , str ) ;
		f(b , number , 0) ;
		memset(str , 0 ,sizeof(str));  //???0?
	}

	return 0;
}

unsigned turn(int n1 , char a[])    //???????10???
{
    int sum = 0;
	for( i = 0 ; i <= length - 1 ; i++)
	{
		if(a[i] >= '0' && a[i] <= '9')
			sum = sum * n1 +  (a[i] - '0');
		
		else if(a[i] >= 'A' && a[i] <= 'Z')
			sum = sum * n1 + (a[i] - 'A' + 10);
		
		else if(a[i] >= 'a' && a[i] <= 'z')
			sum = sum * n1 + (a[i] - 'a' + 10);
	}
	return sum;
}

void f(int n2 , unsigned s , int j)    //?????????????
{
	int  k;
	if(s == 0)
	{
		if(j == 0)
			cout << 0;
		for(i = j - 1 ; i >= 0 ; i --)
			printf("%c",n[i]);
	}
	else 
	{
		k  = s  %  n2 ;
		s = s / n2 ;
		
		if(k  <=  9 && k >= 0)
			n[j] = k  + '0' ;
		else
			n[j] = (k - 10) + 'A';
		
        f(n2 , s , j + 1);                    //?????
	}                    
	
	return;
}
			 



	
	
	
	







		
	





