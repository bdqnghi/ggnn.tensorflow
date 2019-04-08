int main()
{
    int a,b,c,d,e,f;
    int i,j,k,sum;
	while(scanf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f)&&a!=0)
    {
	d=d+12;
	if(c<f)
		i=f-c;
	else
	{
		i=60+f-c;
		e=e-1;
	}
	if(b<e)
		j=60*(e-b);
	else
	{
		j=60*(60+e-b);
	    d=d-1;
        
	}
     k=60*60*(d-a);
	
	sum=i+j+k;

	printf("%d\n",sum);
    
    }



	





	return 0;

}
