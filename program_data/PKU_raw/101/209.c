/**
* @file homework.cpp
* @author ??
* @date 2010?11?17
* @description
* ??????: ??? 
*/
int main()
{
	int a, b, c, l[3] = {0};                                //????    
	char p[2];                                              //??????
	for (a=0;a<3;a++)
		for (b=0;b<3;b++)
			for (c=0;c<3;c++)                              //?? ??
			{
				if(a != b && b != c && a != c)             //?????
				{
				l[a] = (b > a) + (c == a);             
				l[b] = (a > b) + (a > c);
				l[c] = (c > b) + (b > a);                 //????????
				if (l[0] > l[1] && l[1] > l[2])           //?????       
				{
					p[a] = 'A';
					p[b] = 'B';
					p[c] = 'C';
					cout << p[0] << p[1] << p[2];         //????
				}
				}
			}
			return 0;
}