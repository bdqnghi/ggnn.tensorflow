
int ss(long num)
{
   long i,j,k;
   k=sqrt(num)+1;
   if (num==2) return 0;
   if (num==1) return 1;
   for (i=2;i<=k;i++)
   {
       if ((num%i)==0) return 1;
   }
   return 0;
}

int huiwen(long num)
{
    long i,j,k,x;

	char num2[10];

	k=1;
	while (num>=10)
	{
	 
		num2[k]=num%10+48;
	   num=num/10; k++;   
	
	}
    num2[k]=num+48;
   
	x=k/2+1;
	for (i=1;i<=x;i++)
	{
	   if (num2[i]!=num2[k-i+1]) return 0;
	}
	return 1;
}

int main()
{
    long i,n,m,k,ans;
	
	scanf ("%d %d",&n,&m);
	k=0;
	for (i=n;i<=m;i++)
	{
	   ans=ss(i);
	   if (ans==0) 
	   {
	      if (huiwen(i)==1)
		  {
		   if (k==0) printf ("%d",i);
		      else printf (",%d",i);
            k++;
		  }
	   }
	}
	if (k==0) printf ("no\n");
}