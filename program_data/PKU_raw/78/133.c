/*
 * chengtizhong.cpp
 *
 *  Created on: 2012-1-10
 *      Author: Administrator
 */
int main()
{
	int z,q,s,l;
	int number[4];
	char name[4]={'z','q','s','l'};
	for(z=1;z<=5;z++)
	{
		for(q=1;q<=5;q++)
		{
			for(s=1;s<=5;s++)
			{
				for(l=1;l<=5;l++)
				{
					if((z+q)==(s+l))
					{
						if((z+l)>(s+q))
						{
							if((z+s)<q)
							{
								number[0]=z;
								number[1]=q;
								number[2]=s;
								number[3]=l;
							}
						}
					}
				}
			}
		}
	}
	int i,j,temp;
	char temp1;
	for(i=0;i<4;i++)
	{
		for(j=0;j<3-i;j++)
		{
			if(number[j]<number[j+1])
			{
				temp=number[j+1];temp1=name[j+1];
				number[j+1]=number[j];name[j+1]=name[j];
				number[j]=temp;name[j]=temp1;
			}
		}
	}
	for(i=0;i<4;i++)
	{
		cout<<name[i]<<" "<<number[i]*10<<endl;
	}
	return 0;
}
