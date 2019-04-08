int main()
{
	int m , a;
	cin >>m;
	cout <<endl;
	for (int i = 2;i <= m/2;i++)//??i?????
	{
		if (i%2 == 1)
		{
		   int l=0;
		   for (int k = 2;k <= floor(sqrt(i));k++)//??i?????
			   if (i%k == 0) l = l + 1;
		   if (l == 0) 
	          {
		   int h = 0;
	             a = m - i ;//?i????m?????a????
	           for (  int b = 2;b <= floor(sqrt(a));b++)//??a?????
				  if (a%b == 0) h = h + 1;
			  if (h == 0)
			      cout << i <<" "<< a <<endl;
	           }
                     }
	}
      return 0;
}
