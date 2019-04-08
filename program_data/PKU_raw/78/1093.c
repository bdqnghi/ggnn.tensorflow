int main()
{
    int z,q,s,l,i,j,k,h,a,b,c ;
	for (i=1;i<=5;i++)
	{
		z=i;
		for (j=1;j<=5;j++)
		{
			q=j;
			for (k=1;k<=5;k++)
			{
				s=k;
				for (h=1;h<=5;h++)
				{
					l=h;
					if (z-q!=0&&z-s!=0&&z-l!=0&&q-s!=0&&q-l!=0&&s-l!=0)
					{
						a=((z+q)==(s+l))+((z+l)>(s+q))+((s+z)<q) ;
						if (a==3)
						{
							q=q*10; z=z*10; l=l*10; s=s*10;
						    if (q>l&&l>s&&s>z) cout << "q" << " " << q << endl << "l" << " " << l << endl << "s" << " " << s <<endl << "z" << " " << z <<endl ;
                            if (q>l&&l>z&&z>s) cout << "q" << " " << q << endl << "l" << " " << l << endl << "z" << " " << z <<endl << "s" << " " << s <<endl ;
							if (q>s&&s>l&&l>z) cout << "q" << " " << q << endl << "s" << " " << s << endl << "l" << " " << l <<endl << "z" << " " << z <<endl ;
							if (q>s&&s>z&&z>l) cout << "q" << " " << q << endl << "s" << " " << s << endl << "z" << " " << z <<endl << "l" << " " << l <<endl ;
							if (q>z&&z>s&&s>l) cout << "q" << " " << q << endl << "z" << " " << z << endl << "s" << " " << s <<endl << "l" << " " << l <<endl ;
							if (q>z&&z>l&&l>s) cout << "q" << " " << q << endl << "z" << " " << z << endl << "l" << " " << l <<endl << "s" << " " << s <<endl ;
							
						    if (l>q&&q>s&&s>z) cout << "l" << " " << l << endl << "q" << " " << q << endl << "s" << " " << s <<endl << "z" << " " << z <<endl ;
                            if (l>q&&q>z&&z>s) cout << "l" << " " << l << endl << "q" << " " << q << endl << "z" << " " << z <<endl << "s" << " " << s <<endl ;
							if (l>s&&s>q&&q>z) cout << "l" << " " << l << endl << "s" << " " << s << endl << "q" << " " << q <<endl << "z" << " " << z <<endl ;
							if (l>s&&s>z&&z>q) cout << "l" << " " << l << endl << "s" << " " << s << endl << "z" << " " << z <<endl << "q" << " " << q <<endl ;
							if (l>z&&z>s&&s>q) cout << "l" << " " << l << endl << "z" << " " << z << endl << "s" << " " << s <<endl << "q" << " " << q <<endl ;
							if (l>z&&z>q&&q>s) cout << "l" << " " << l << endl << "z" << " " << z << endl << "q" << " " << q <<endl << "s" << " " << s <<endl ;	
						}
					}
				}
			}
		}
	}


	return 0 ;
}
