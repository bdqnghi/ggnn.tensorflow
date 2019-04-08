/*
 * jiaogucaixiang.cpp
 *
 *  Created on: 2011-12-21
 *      Author: 1100012857
 */
int main(void)
{
	int num;
	cin>>num;
	while(true)
	{
		if(num==1)
			break;
		else
		{
			switch(num%2)
			{
			case 0:
			{
				cout<<num<<"/2="<<num/2<<endl;
				num/=2;
				break;
			}
			case 1:
			{
				cout<<num<<"*3+1="<<num*3+1<<endl;
				num=num*3+1;
				break;
			}
			default:;
			}
		}
	}
	cout<<"End"<<endl;
	return 0;
}
