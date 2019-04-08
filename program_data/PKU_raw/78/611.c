/*
 * chengtizhong.cpp
 *??????
 *  Created on: 2013-9-27
 *      Author: ???
 */
int main()
{
	for(int z=10;z<=50;z+=10)
		for(int q=10;q<=50;q+=10)
			for(int s=10;s<=50;s+=10)
			{
				int l=z+q-s;
				if((z+l>s+q)&&(z+s<q)&&(z!=q)&&(z!=s)&&(z!=l)&&(q!=s)&&(q!=l)&&(s!=l)&&(l>0)&&(l<=50))
				{
					for(int i=50;i>0;i-=10)
					{
						if(z==i)
							cout<<"z "<<z<<endl;
						if(q==i)
							cout<<"q "<<q<<endl;
						if(s==i)
							cout<<"s "<<s<<endl;
						if(l==i)
							cout<<"l "<<l<<endl;
					}
				}
			}
	return 0;
}
