int main()
{
	int z,q,s,l;
	for(z = 1; z<=5; z++)
		for(q = 1; q<=5; q++)
			for(s = 1; s <=5; s++)
				for(l = 1; l <=5; l++)
				{
					if( (z+q == s+l) && (z+l > s+q) && (z+s < q) && (z!=q) && (z!=s) && (z!=l) && (q!=s) && (q!=l) && (s!=l) )
					{
						if(l>q&&l>z&&l>s&&q>s&&q>z&&z>s)
						{
						cout << "l " << l*10 <<endl;
						cout << "q " << q*10 <<endl;
						cout << "z " << z*10 <<endl;
						cout << "s " << s*10 <<endl;
						}
						if(l>q&&l>s&&l>z&&q>s&&q>z&&s>z)
							{
						cout << "l " << l*10 <<endl;
						cout << "q " << q*10 <<endl;
						cout << "s " << s*10 <<endl;
						cout << "z " << z*10 <<endl;
						}
						if(q>l&&q>s&&q>z&&l>s&&l>z&&s>s)
							{
						cout << "q " << q*10 <<endl;
						cout << "l " << l*10 <<endl;
						cout << "s " << s*10 <<endl;
						cout << "z " << z*10 <<endl;
						}
						if(q>l&&q>z&&q>s&&l>z&&l>s&&z>s)
							{
						cout << "q " << q*10 <<endl;
						cout << "l " << l*10 <<endl;
						cout << "z " << z*10 <<endl;
						cout << "s " << s*10 <<endl;
						}

					}
				}
return 0;
}