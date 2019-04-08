int main()
{
int n;
scanf("%d",&n);
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int i,j;
int k;
for(i=1;i<=12;i++)
 {
    int days=0;
	for(j=i-1;j>=0;j--)
   {
	days=days+month[j];
   }
	days+=13;
   k=n-1+days%7;
   if(k==0)
   	{
   	  k=7;
    }
    else if(k>7)
    {
    	k=k-7;
    }
     if(k==5)
	{
       printf("%d\n",i);
    }
   }
return 0;
}

