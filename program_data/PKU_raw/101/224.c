/**
* @file homework.cpp
* @author ??
* @date 2010?11?17
* @description
* ??????: ??? 
*/
int main()
{
	int a, b, c, l[3];                                //????                                            
	for (a=0;a<3;a++)
		for (b=0;b<3;b++)
			for (c=0;c<3;c++)                              //?? ??
			{
		       if (a!=b && b!=c && a!=c)
			   {
				   l[a] = (b > a) + (c == a);
				   l[b] = (a > b) + (a > c);
				   l[c] = (c > b) + (b > a);
				   if ((a + l[a])==2 && (b+l[b])==2 && (c+l[c])==2)
				   {  
					   if (a < b && b < c)
						   cout << "ABC";
					   if (a < c && c< b)
						   cout << "ACB";
					   if (b <a && a < c)
						   cout << "BAC";
					   if (b <c && c <a)
						   cout << "BCA";
					   if (c < a && a < b)
						   cout << "CAB";
					   if (c < b && b< a)
						   cout << "CBA";
				   }
			   }
			}
			return 0;
}