/*
 * 20.cpp
 *???
 *  Created on: 2012-10-17
 *      Author: ???
 */
int main()
{
	int a,b,c;
	for(a=1;a<=3;a++)
	{
		for(b=1;b<=3;b++)
			{
			for(c=1;c<=3;c++)
				{
					int sum1=(b>a)+(a==c),
						sum2=(a>b)+(a>c),
						sum3=(c>b)+(c>a);
					if(((sum1>sum2)&&(a<b)||(sum1<sum2)&&(a>b))&&((sum1>sum3)&&(a<c)||(sum1<sum3)&&(a>c))&&((sum2>sum3)&&(b<c)||(sum2<sum3)&&(b>c)))
					{
						if((sum1>sum2)&&(sum1>sum3))
							cout<<"A";
						if((sum2>sum3)&&(sum2>sum1))
							cout<<"B";
						if((sum3>sum2)&&(sum3>sum1))
							cout<<"C";
						if(((sum1>sum2)&&(sum3>sum1))||((sum1>sum3)&&(sum2>sum1)))
							cout<<"A";
						if(((sum2>sum1)&&(sum3>sum2))||((sum2>sum3)&&(sum1>sum2)))
							cout<<"B";
						if(((sum3>sum2)&&(sum1>sum3))||((sum3>sum1)&&(sum2>sum3)))
							cout<<"C";
						if((sum1<sum2)&&(sum1<sum3))
													cout<<"A";
						if((sum2<sum1)&&(sum2<sum3))
													cout<<"B";
						if((sum3<sum2)&&(sum3<sum1))
													cout<<"C";
					}

				}
			}
	}
}
