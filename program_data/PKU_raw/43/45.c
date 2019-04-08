void main()
{
	int m,i,d,x,e;
	d=0;
	e=0;
    scanf("%d",&m);
	for (i=2;i<=m/2;i++)
	{ d=0;
	  e=0; 
		if (i%2==0);
		else
		{
			for (x=2;x<i;x++)
				if (i%x==0) d=1;
                        for (x=2;x<m-i;x++)
				if ((m-i)%x==0) e=1;
            if ((d==0) && (e==0)) printf("%d %d\n",i,m-i); 
        }    
    }
 }	