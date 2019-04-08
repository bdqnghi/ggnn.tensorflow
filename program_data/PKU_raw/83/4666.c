int main (){
   int n,i,sz1[100],sz2[100];
   double a,b[100],GPA,sum,su;
   a=0;
   GPA=0;
   su=0;
   sum=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
	   scanf("%d",&sz1[i]);
   }
   for(i=0;i<n;i++)
   {
	   scanf("%d",&sz2[i]);
   }
    for(i=0;i<n;i++)
	{
		if(sz2[i]<60)
		{
			a=0;
		}
		else if(sz2[i]>=60 && sz2[i]<=63)
		{
			a=1.3;
		}
			
		else if(sz2[i]>=64&&sz2[i]<=67)
		{
			a=1.5;
		}
		else if(sz2[i]>=68&&sz2[i]<=71)
		{
			a=2.0;
		}
		else if(sz2[i]>=72&&sz2[i]<=74)
		{
			a=2.3;
		}
		else if(sz2[i]>=75&&sz2[i]<=77)
		{
			a=2.7;
		}
		else if(sz2[i]>=78&&sz2[i]<=81)
		{
			a=3.0;
		}
		else if(sz2[i]>=82&&sz2[i]<=84)
		{
			a=3.3;
		}
		else if(sz2[i]>=85&&sz2[i]<=89)
		{
			a=3.7;
		}
		else if(sz2[i]>=90)
		{
			a=4.0;
		}
	b[i]=1.0 * sz1[i]*a;
	}
	for(i=0;i<n;i++)
	{
		su=su+sz1[i]*1.0;
	}
	for(i=0;i<n;i++)
	{
		sum=sum+b[i];
	}
	GPA=sum/su;
	printf("%.2lf",GPA);
	return 0;
}
