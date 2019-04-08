void main(){
	int x,y,i,j,m,number1,number2;
	scanf("%d %d",&x,&y);
	int a[12]={0},b[12]={0};
	int c[12]={0},d[12]={0};
	i=1;
	a[0]=x;
	while(a[i-1]>1)
	{ 
		m=1;
		for(j=1;j<=i+1;j++)m*=2; 
		m=m/4;
		a[i]=x/m;
		i++;
	}
	number1=i;
	
	for(i=0;i<=number1-1;i++)
        c[i]=a[number1-1-i];
	
	
	i=1;b[0]=y;
	while(b[i-1]>1)
	{ 
		m=1;
		for(j=1;j<=i+1;j++) m*=2;
		m=m/4;
		b[i]=y/m;
		i++;
	}
	number2=i;
	
	for(i=0;i<=number2-1;i++)
		d[i]=b[number2-1-i];
	
	
	if(number1!=number2)	
	{
		for(i=1;i<12;i++)
		{
			if(c[i]!=d[i])
			{
				if(c[i]>d[i]||c[i]==d[i]+1||c[i]==2*d[i]){printf("%d",d[i-1]);break;}
				if(d[i]> c[i]||d[i]==c[i]+1||d[i]==2*c[i]){printf("%d",c[i-1]);break;}
				
				
			}
		} 
	}
	if(number1==number2)
	{
	  	for(i=1;i<12;i++)
		{
			if(c[i]!=d[i])
			{
				if(c[i]>d[i]||c[i]==d[i]+1||c[i]==2*d[i]){printf("%d",d[i-1]);break;}
				if(d[i]> c[i]||d[i]==c[i]+1||d[i]==2*c[i]){printf("%d",c[i-1]);break;}
				
				
			} 
		}    
		if(i=number1-1)
		{ 
			if(c[i]==d[i]){printf("%d",c[i-1]);}
	
		}
		
	}
}