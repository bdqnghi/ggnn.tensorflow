/*
 * mm.cpp
 *
 *  Created on: 2012-11-18
 *      Author: ada
 */
void get_array(int a[]);
int a[101] ;
int main()
{

	get_array(a);

}
void get_array(int a[])//????
{

	int n1 , n2 ;
	cin >>n1 >>n2 ;
	for(int i = 0 ; i < n1 ; i++)
	{
		cin >>a[i];
	}
	for(int i = 0 ; i < n1-1 ; i++)//????
	{
		for(int j = 0 ; j < n1-1-i ; j++)
		{
			if(a[j]>a[j+1])
			{
				int tmp ;
				tmp = a[j] ;
				a[j] = a[j+1];
				a[j+1] = tmp ;
			}
		}
	}
	cout << a[0] ;
	for(int i = 1 ; i < n1 ; i++)
		{
			cout <<" "<<a[i];
		}
	for(int i = 0 ; i < n2 ; i++)
		{
			cin >>a[i];
		}
		for(int i = 0 ; i < n2-1 ; i++)//????
		{
			for(int j = 0 ; j < n2-1-i ; j++)
			{
				if(a[j]>a[j+1])
				{
					int tmp ;
					tmp = a[j] ;
					a[j] = a[j+1];
					a[j+1] = tmp ;
				}
			}
		}
		for(int i = 0 ; i < n2 ; i++)
			{
				cout <<" "<<a[i];
			}
	return ;
}
