void main()
{
	char s[200],x[200],d[200];
	int ka=1,kb=1,z=0,ia=0,ib=0,i2=0,z0=100,i,j;
	gets(s);
	
	for(i=0;;i++,ka++,kb++)
	{
		if(s[i]=='\0')
		{
			if(ka>z)
			{
			  for(j=ia;j<=i-1;j++)
			  {
				 d[i2]=s[j];
				 i2++;
			  }
			  d[i2]='\0';

			   z=ka;
			   
			   i2=0;
			   
			   
			}
			if((kb<z0)&&(((s[i-1]<=90)&&(s[i-1]>=65))||((s[i-1]<=122)&&(s[i-1]>=97))))
			{
			  for(j=ib;j<=i-1;j++)
			  {
				 x[i2]=s[j];
				 i2++;
			  }
			  x[i2]='\0';

			   z0=kb;
			   
			   i2=0;
			   
			   
			}
			ka=0;kb=0;
			ia=i+1;ib=i+1;
			break;
		}
		else
		{

		 if(((s[i]<=90)&&(s[i]>=65))||((s[i]<=122)&&(s[i]>=97)))
		 {
		 }
		 else
		 {
			if(ka>z)
			{
			  for(j=ia;j<=i-1;j++)
			  {
				 d[i2]=s[j];
				 i2++;
			  }
			  d[i2]='\0';

			   z=ka;
			   
			   i2=0;
			   
			   
			}
			if(kb<z0)
			{
			  for(j=ib;j<=i-1;j++)
			  {
				 x[i2]=s[j];
				 i2++;
			  }
			  x[i2]='\0';

			   z0=kb;
			   
			   i2=0;
			   
			   
			}
			ka=0;kb=0;
			ia=i+1;ib=i+1;
		 }



		}
	}
	printf("%s\n",d);
	printf("%s\n",x);
}

	
			