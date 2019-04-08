int num(int n)
{
     int i,b,a;
	 for(i=3;i<=sqrt(n);i=i+2)
	  { 
		 b=n%i;
		 if(b==0)
		 {
		   a=0;
		   return(a); 
		 }		
      }
	 a=1;
	 return(a);  
}
void main()
{
	int a,i,j,c,d;
    scanf("%d",&a);
	for(i=6;i<=a;i=i+2)
	{	
		for(j=3;j<=(i/2);j=j+2)
        {
			c=num(j);
			d=num(i-j);
			if((c==1)&&(d==1))
			{	
			    printf("%d=%d+%d\n",i,j,i-j);
			    break;
			}
		}
	}
}

