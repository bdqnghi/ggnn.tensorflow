//****************************************************** 
/* ? ? ?   ???2?n???????
/* ? ?      ????                           
/* ? ? ? ??2010 ?  12 ?  15  ?     
/* ? ? ? ????2?n???n????100?
/* ? ?      ?1000012752        
*******************************************************/ 
void chengfang(int result[],int n)
{
	int i;
	if(n==0)										//????
		return;
	else
	{	
		for(i=32 ; i>=0 ; i--)
		{
			result[i] = result[i] * 2;				//???2
		}
		for(i=32 ; i>0 ; i--)						//??
		{
			if(result[i] >= 10)
			{
				result[i-1] += result[i] / 10;
				result[i] %= 10;
			}
		}
		chengfang(result,n-1);						//???????n=0???????n??
	}
}                     
int main()                                  
{
    int result[33],*p;
	int n;
	cin >> n;
	memset(result,0,sizeof(result));
	result[32] = 1;									//???????1
	chengfang(result,n);
	p = result;										//????????0??
	while(*p == 0)   p++;
	for( ; p<=result+32 ; p++)						//???????
		cout << *p;
    return 0;
}
                          
    
    
