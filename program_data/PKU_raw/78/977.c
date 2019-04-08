
int main()
{
	int z,q,s,l;
	for(z=1;z<6;z++) 
		for(s=1;s<6;s++) 
			for(q=z+s+1;q<6;q++) 
			{
				l=z+q-s;
				if ((z+l)>(s+q) && l<6 && l>0)
				{
					z*=10;s*=10;q*=10;l*=10;
					
					if (l>q) {
						cout << "l " << l << endl;
						cout << "q " << q << endl;
					}
					else{
						cout << "q " << q << endl;
						cout << "l " << l << endl;
					}
					if (z>s) {
						cout << "z " << z << endl;
						cout << "s " << s << endl;
					}
					else{
						cout << "s " << s << endl;
						cout << "z " << z << endl;
					}
				}
			}

}