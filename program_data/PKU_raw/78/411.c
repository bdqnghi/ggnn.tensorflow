int main()
{
	int i,j,k,w,z,q,s,l;
	for(i=1;i<=5;i++)
	{
		z=i;
		for(j=1;j<=5;j++)
		{
			q=j;
			for(k=1;k<=5;k++)
				{
				s=k;
				for(w=1;w<=5;w++)
				{
					l=w;
					if(z+q==s+l&&z+l>s+q&&z+s<q) 
						printf("l %d\nq %d\nz %d\ns %d\n",l*10,q*10,z*10,s*10);
					
				}
			}
		}
	}
	return 0;
}