int main()
{
	int i=0,j=0,x=0,y=0,z=0,q=0,s=0,l=0;
	for(i=1;i<6;i++)
	{
			z=10*i;
		for(j=1;j<6;j++)
		{
			q=10*j;
			for(x=1;x<6;x++)
			{	
				s=10*x;
				for(y=1;y<6;y++)
				{
					l=10*y;
					if((z+q==s+l)&&(z+l>s+q)&&(z+s<q))
					{
						cout<<'l'<<' '<<l<<endl<<'q'<<' '<<q<<endl<<'z'<<' '<<z<<endl<<'s'<<' '<<s<<endl;
					}
				}
			}
		}
	}
	return 0;
}
						
					