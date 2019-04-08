/*
 * practice.cpp
 *
 *  Created on: 2013-12-26
 *      Author: 111
 */

int main()
{
	int z,q,s,l;
	for (z=10;z<60;z+=10)
		for (q=10;q<60;q+=10)
			for(s=10;s<60;s+=10)
				for(l=10;l<60;l+=10)
				{
					if(z==q||z==s||z==l||q==s||q==l||s==l) continue;
					if(z+q==s+l&&z+l>s+q&&z+s<q)
					{
						for(int i=50;i>0;i = i-10)
						{
							if(z==i) cout << 'z' << ' ' << z << endl;
							if(q==i) cout << 'q' << ' ' << q << endl;
							if(s==i) cout << 's' << ' ' << s << endl;
							if(l==i) cout << 'l' << ' ' << l << endl;
						}
					}
				}
	return 0;
}
