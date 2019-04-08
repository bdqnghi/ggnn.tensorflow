int main()
{
	
	char A[250];
	char B[250];
	char C[251]={'1'};
	int i,a=0,b=0,m=0,d=0,e=0,g=0,j;
	gets(A);
	gets(B);
	for(i=0;A[i]!='\0';i++)
	{
		a++;
	}
	for(i=0;B[i]!='\0';i++)
	{
		b++;
	}
	for(i=0;A[i]=='0';i++)
		{
     	d++;
		}
	if(a>=b)
	{
		
		for(i=a-1;i>=a-b;i--)
		{
			B[i]=B[i-a+b];
		}
		for(i=0;i<a-b;i++)
		{
			B[i]='0';
		}
		B[a]='\0';
	    m=0;
		for(i=a-1;i>=0;i--)
		{
			if(A[i]+B[i]+m>105)
			{
				A[i]=A[i]+B[i]+m-58;
				m=1;
			}
			else if(A[i]+B[i]+m<=105)
			{
				A[i]=A[i]+B[i]+m-'0';
				m=0;
			}
		}
		if(d!=0)
		{
			for(j=0;A[j]=='0';j++)
			{
				g++;
			}
			for(j=0;j<a-g;j++)
			{
				A[j]=A[j+g];
			}
			A[a-g]='\0';
	        if(A[0]=='\0')
			{
				A[0]='0';
			}
			puts(A);
		}
	else
	{

			if(m==0)
			{
			puts(A);
			}
	    	if(m==1)
			{
		   strcat(C,A);
			puts(C);
			}
			
		

	}
	}

	if(a<b)
	{
		for(i=0;B[i]=='0';i++)
		{
			e++;
		}
		for(i=b-1;i>=b-a;i--)
		{
			A[i]=A[i-b+a];
		}
		for(i=0;i<b-a;i++)
		{
			A[i]='0';
		}
		A[b]='\0';

	    m=0;
		for(i=b-1;i>=0;i--)
		{
			if(A[i]+B[i]+m>105)
			{
				A[i]=A[i]+B[i]+m-58;
				m=1;
			}
			else if(A[i]+B[i]+m<=105)
			{
				A[i]=A[i]+B[i]+m-'0';
				m=0;
			}
		}
		if(e!=0)
		{
            for(i=0;A[i]=='0';i++)
			{
				g++;
			}
			for(i=0;i<b-g;i++)
			{
				A[i]=A[i+g];
			}
			A[b-g]='\0';
			if(A[0]=='\0')
			{
				A[0]='0';
			}
			puts(A);
		}
	
	
	   else 
	   {

			if(m==0)
			{
			puts(A);
			}
	    	if(m==1)
			{
		   strcat(C,A);
			puts(C);
			}
			
	   }
	   }

 return 0;
}