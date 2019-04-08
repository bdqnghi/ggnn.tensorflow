void main()
{   
	int reverse(int num); 
	int a[6],b[6];
	int i;
	for(i=0;i<6;i++)
		scanf("%d",&a[i]);
	for(i=0;i<6;i++)
		b[i]=reverse(a[i]);
	for(i=0;i<6;i++)
		printf("%d\n",b[i]);
}
reverse(int a)
{
	int j,p,l=0,c=a,z=0;
if(a>=0)
	{
	    for(;c>0;)
		{
	    	c=c/10;
		    l++;
		}
         for(j=l-1;j>=0;j--)
		 { 
		  p=a/(int)pow(10,j);
          z=z+p*(int)pow(10,l-j-1);
		  a=a-p*pow(10,j);
		 }
	}
else 
{
	     for(;c<0;)
		 {
	     	c=c/10;
		    l++;
		 }
         for(j=l-1;j>=0;j--)
		 { 
		  p=a/(int)pow(10,j);
          z=z+p*(int)pow(10,l-j-1);
		  a=a-p*pow(10,j);
		 }
}
        return z;
}