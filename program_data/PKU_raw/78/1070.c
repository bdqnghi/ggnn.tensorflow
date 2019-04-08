int main()
{
	int z, q, s, l;
	for (z = 10; z<=50; z+=10)
	{
		for(q = 10; q<=50;q+=10)
		{
			for(s=10;s<=50;s+=10)
			{
				for(l=10;l<=50;l+=10)
				{
					int pp1 =((z+q)==(s+l)) ;
					int pp2 = ((z+l)>(s+q));
					int pp3 = ((z+s)<q);
					if ((pp1+pp2+pp3)==3 )
						cout << "l " << l <<'\n'<< "q " << q <<'\n'<< "z " << z <<'\n'<< "s " << s << endl;
				}
			}
		}
	}
	return 0;
}


