int main()
{
    int p[15],m,n;
	int i,j,k,h;
	for(i=0;;i++)
	{
		n=0;
		for(j=0;;j++)
		{
		   scanf("%d",&m);
		   if(m==0)  break;
		   if(m==-1) return 0;
		   p[j]=m;
		}
        for(k=0;k<j;k++)
		{
			for(h=0;h<j;h++)
			{
			 if(p[k]==2*p[h]) n++;
			}		
		}
		printf("%d\n",n);	
	}
    return 0;
}