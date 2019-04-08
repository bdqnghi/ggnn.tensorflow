int main()
{
	int a,b,c,d,e,f,x=0,y=0,z=0,i;
	for(i=1;i<20;i++)
	{
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0){
			break;
		}else{
			x=3600*a+60*b+c;
        	                  y=3600*d+60*e+f;
        	                  z=12*3600+y-x;
	       	         printf("%d\n",z);
		}
	}
	return 0;
}
