int main()
{
	int z, q, s, l, num1, num2, num3, num4;
    for (z=1;z<=5;z++)
		for(q=1;q<=5;q++)
			for (s=1;s<=5;s++)
				for (l=1;l<=5;l++)
				{
					if ((z-q)*(z-s)*(z-l)*(q-s)*(q-l)*(s-l)!=0)
					{
						if ((z+q==s+l)&&(z+l>s+q)&&(z+s<q))
						{
							cout << "l " << 10 * l<< endl;
						    cout << "q " << 10 * q<<endl;
							 cout << "z "<< 10 * z<<endl;
							cout << "s " << 10 * s;
							 
							  
						}
					}
					
				}
                        
			


}
