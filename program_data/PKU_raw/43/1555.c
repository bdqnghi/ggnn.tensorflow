int main()
{
	int m,i=0,j=0,a=0,b=0,c=0,d=0;
	scanf("%d",&m);
    for(i=3;i<=(m/2);i=i+2)
	{
		c=0;
		d=0;
		for(a=2;a<i;a++)
		{
			
			b=i%a;
			if(b==0)
			c++;
      
		}
		for(a=2;a<(m-i);a++)
		{
			
			b=(m-i)%a;
			if(b==0)
			d++;
      
		}
		if((c==0)&&(d==0))
			printf("%d %d\n",i,(m-i));

	
		
	}
	return 0;
}