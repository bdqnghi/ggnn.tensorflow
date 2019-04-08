int main()
{
	int z, q, s, l, z1, q1, s1, l1;
	char Z = 'z';
	char Q = 'q';
	char S = 's';
	char L = 'l';
	int max1, max2, min1, min2, n1, n2, n3, n4;
	char MAX1, MAX2, MIN1, MIN2, N1, N2, N3, N4;
	
	for(z1 = 10; z1 <= 50; z1 = z1 + 10)
	{
		for(q1 = 10; q1 <= 50; q1 = q1 +10)
		{
			for(s1 = 10; s1 <= 50; s1 = s1 + 10)
			{
				for(l1 = 10; l1 <= 50; l1 =l1 + 10)
				{
					if((z1 + q1 == s1 + l1)  && (z1 + l1 >= s1 + q1) && (z1 + s1 < q1) && (z1 != q1) 
						&& (z1 != s1) && (z1 != l1) && (q1 != s1) && (q1 != l1) && (s1 != l1))
					{
						z = z1;
						q = q1;
						s = s1;
						l = l1;
					}
				}
			}
		}
	}
	
	if (z > q)
	{
		max1 = z;
		MAX1 = 'z';
		min1 = q;
		MIN1 = 'q';
	}
	else
	{	
		max1 = q;
		MAX1 = 'q';
		min1 = z;
		MIN1 = 'z';
	}
	if(s > l)
	{
		max2 = s;
		MAX2 = 's';
		min2 = l;
		MIN2= 'l';
	}
	else
	{
		max2 = l;
		MAX2 = 'l';
		min2 = s;
		MIN2= 's';
	}
	
	if(max1 > max2)
	{
		n1 = max1;
		N1 = MAX1;
		n2 = max2;
		N2 = MAX2;
	}
	else
	{
		n1 = max2;
		N1 = MAX2;
		n2 = max1;
		N2 = MAX1;
	}
	if(min1 < min2)
	{
		n4 = min1;
		N4 = MIN1;
		n3 = min2;
		N3 = MIN2;
	}
	else
	{
		n4 = min2;
		N4 = MIN2;
		n3 = min1;
		N3 = MIN1;
	}
	cout<<N1<<" "<<n1<<endl;
	cout<<N2<<" "<<n2<<endl;
	cout<<N3<<" "<<n3<<endl;
	cout<<N4<<" "<<n4<<endl;
	return 0;
}