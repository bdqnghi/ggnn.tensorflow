int main()
{
	int z, q, s, l;

	for (q =4;q <=5;q++)
		{
			for (z = 1; z <= 5;z++)
		{
			if (z == q) continue;
			for (s = 1; s <= 5;z++)
			{
				if (s == q||s == z) continue;
				 l = z+ q -s;
					if (l == q||l == z|| l==s) continue;
					if (z + q == s+ l&&z + l > s+ q && z + s < q)
						{
							if(l==5)
							{cout <<"l "<< 10 * l <<endl;
					cout <<"q "<< 10 * q <<endl;
					cout <<"z "<< 10 * z <<endl;
					cout <<"s "<< 10 * s <<endl;}
							else
								{cout <<"q "<< 10 * q <<endl;
					cout <<"l "<< 10 * l <<endl;
					cout <<"s "<< 10 * s <<endl;
					cout <<"z "<< 10 * z <<endl;}

				
			}
			}
	}
	}
	return 0;
}