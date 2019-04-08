int main()
{
	int z,q,s,l,a,b,c,d;
	for (z=10;z<=50;z=z+10)
	{
		for (q=10;q<=50;q=q+10)
		{
			for (s=10;s<=50;s=s+10)
			{
				for (l=10;l<=50;l=l+10)
				{
					a=(z+q)==(s+l);
					b=(z+l)>(s+q);
					c=(z+s)<q;
				if (a==1 && b==1 && c==1)
				{   if (a)
					cout<<"l "<<l <<endl;
				    cout<<"q "<<q <<endl;
				    cout<<"z "<<z <<endl;
					cout<<"s "<<s <<endl;
					break;
				}
				}
			}
		}
	} 
	return 0;
}

			


