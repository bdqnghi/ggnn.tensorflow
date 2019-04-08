/***************************************************************************
*autour:??? 
*number:1000012905
*description:?????  
****************************************************************************/
int main()
{
	int	in[1000] = {0}, out[1000] = {0};
	char	p;
	int	count = 0;	//???? 
	
	//??????????? --!~~~ 
	//????????????????in[]??????????out[]? 
	char pan;
	do
	{
		char	q[4];
		pan = '0';
		int	s = 0;
		do
		{
			q[s] = cin.get();
			pan = q[s];
			s ++;
		}while((pan != ',') && (pan != '\n'));
		for (int k = 0; k < s - 1; k ++)
		{
			in[count] = in[count] * 10 + (int)(q[k] - '0');
		}
		count ++;
	}while(pan != '\n');	
	count = 0;			
	do
	{
		char	q[4];
		pan = '0';
		int	s = 0;
		do
		{
			q[s] = cin.get();
			pan = q[s];
			s ++;
		}while((pan != ',') && (pan != '\n'));
		for (int k = 0; k < s - 1; k ++)
		{
			out[count] = out[count] * 10 + (int)(q[k] - '0');
		}
		count ++;
	}while(pan != '\n');	

	//????????? 
	cout << count << " ";
	
	int	t = 0, j = 0, MAX = 0;//MAX?????????? 
	//??????????????  
	for (t = 0; t < 1000; t ++)
	{
		int	ren = 0;	//?????????? 
		for (j = 0; j < count; j ++)
		{
			if((in[j] <= t) &&(t < out[j]))
			{
				ren ++;
			}
		}
		if(ren > MAX)
		{
			MAX = ren;
		}
	}
	
	//?? 
	cout << MAX;
	return 0;
}
