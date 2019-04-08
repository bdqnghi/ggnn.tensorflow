/*Liloy Iris 2012.11.9*/
int main()
{
	char c;                                  //????c
	cin.get(c);                              //??c
	while (c!='\n')                          //?c??????,????
	{
		if (c!=' ')                     //?c?????,??c
			cout<<c;
		else
		{
			cout<<c;
			while (c==' ')         //???????
			{
				cin.get(c);
			}
			cout<<c;
		}
		cin.get(c);
	}
	return 0;
}