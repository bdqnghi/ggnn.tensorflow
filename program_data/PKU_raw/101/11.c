//*************************************
//**????  ??????
//**??    ???  1000010257
//**????  ??abc???????
//***************************************




int main()
{
	int fl[3] ={0} , right[3];//?????????????????
	char output;
	for( int j = 0 ;j <= 2 ;j++) //????
	{
		fl[0] = j ; right[0] = 2 - j;
		for( int k = 0 ; k <= 2; k++)
		{
			if( k != j)     //??????????????????
			{
				fl[1] = k;right[1] = 2 - k;//?????0-2????????2-0
			}
			for( int l = 0 ; l <= 2 ; l++)
			{
				if( (l != j ) && ( l != k ) )
				{
					fl[2] = l;right[2] = 2 - l;
				}
				if( ( right[0] == ( ( fl[1] > fl[0] ) + ( fl[0] == fl[2]) ) && ( right[1] ==( ( fl[0] > fl[1] ) + ( fl[0] > fl[2] )))&&( right[2] == ( ( fl[2] > fl[1] ) + ( fl[1] > fl[0])))))
				{        //????????????
					for( int m = 0 ; m <= 2 ; m++)
					{
						if( fl[m] == 0 )
						{
							output = 'A'+ m;
							cout<<output;
						}
					}
					for( int n = 0 ; n <= 2 ; n++)
					{
						if( fl[n] == 1 )
						{
							output = 'A'+ n;
							cout<<output;
						}
					}
					for( int o = 0 ; o <= 2 ; o++)
					{
						if( fl[o] == 2 )
						{
							output = 'A'+ o;
							cout<<output;
						}
					} //??????????
					break;
				}
			}
		}
	}
	return 0 ;
}
