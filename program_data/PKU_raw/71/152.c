int main(int argc, char* argv[])
{
	int x[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int r[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int y,p,q,n,i;
    int s=0;
	int t=0;
	scanf ("%d",&n);
	while (t<n)
	{ t++;s=0;
	scanf ("%d %d %d",&y,&p,&q);
	if (y%4!=0) {y=1;}
	else if ((y%100==0)&&(y%400!=0)) {y=1;}
	else {y=0;}
    if (y==1)
	{  
		if (p<q) 
		{
		 for (i=p-1;i<q-1;i++)
		 {
		 s=s+x[i];
		 }

		}
	    else 
		{
		for (i=q-1;i<p-1;i++)
		 {
		 s=s+x[i];
		 }
		
		}

		if (s%7==0) 
		{
	    printf ("YES\n");
		}
        else printf ("NO\n");

	}




   if (y==0)
	{
	
	
	if (p<q) 
		{
		 for (i=p-1;i<q-1;i++)
		 {
		 s=s+r[i];
		 }

		}
	    else 
		{
		for (i=q-1;i<p-1;i++)
		 {
		 s=s+r[i];
		 }
		
		}

		if (s%7==0) 
		{
	    printf ("YES\n");
		}
        else printf ("NO\n");
	
	
	
	}
	}  

	return 0;
}
