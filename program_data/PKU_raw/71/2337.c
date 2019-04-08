int main()
{
	int w1=0,w2=0,i,j,k,n,a[200],b[200],c[200];
	int days[12]={0,31,28,31,30,31,30,31,31,30,31,30};
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%d %d %d",&a[i],&b[i],&c[i]);
		{
			if 	(a[i]%4==0 && a[i]%100!=0)	
			
		{
			days[2]=29;
			for(j=0;j<b[i];j++)
			{w1=w1+days[j];}
			for(k=0;k<c[i];k++)
			{w2=w2+days[k];}
			}
              else if 	(a[i]%400==0)
			  {
			days[2]=29;
			for(j=0;j<b[i];j++)
			{w1=w1+days[j];}
			for(k=0;k<c[i];k++)
			{w2=w2+days[k];}
			}

		else {
		days[2]=28;
		
			for(j=0;j<b[i];j++)
			{w1=w1+days[j];}
			for(k=0;k<c[i];k++)
			{w2=w2+days[k];}
		}
	}
     
		  if ((w2-w1)%7==0)
			  printf ("YES\n");
		else 
		{printf("NO\n");}
		w1=0;
		w2=0;
	}
	
	return 0;
}

