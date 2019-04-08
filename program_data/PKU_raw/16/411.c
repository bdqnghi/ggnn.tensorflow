main()
{
	int n;
	int w,a=0,b=0,c=0,d=0,e=0,x;
	scanf("%d",&n);
	a=n%10;
	x=n/10;
	if(x==0)
		w=1;
	else
	{{b=x%10;x=x/10;}
	if(x==0)
			w=2;                                
		else
		{{c=x%10;x=x/10;}
		    if(x==0)
				w=3;
			else
			{{d=x%10;x=x/10;}
			    if(x==0)
					w=4;
				else
				{w=5;e=x%10;}
	}}}
	switch(w)
	{case 5:printf("%d%d%d%d%d\n",a,b,c,d,e);
			break;
	 case 4:printf("%d%d%d%d\n",a,b,c,d);
			break;
	 case 3:printf("%d%d%d\n",a,b,c);
		    break;
	 case 2:printf("%d%d\n",a,b);
			break;
	 case 1:printf("%d\n",a);
			break;
	}
	return 0;
}
