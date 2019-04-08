int s(const void *a,const void *b)
{
	return *(int *)a-*(int *)b;
}
main ()
{
	int n;
	do
	{
	 int a[1000],b[1000];
	 scanf ("%d",&n);
	 for (int i=0;i<n;i++)
		scanf ("%d",&a[i]);
	 for (int i=0;i<n;i++)
	    scanf ("%d",&b[i]);
	 qsort(a,n,sizeof(int),s);
	 qsort(b,n,sizeof(int),s);
	 int t1=n-1,t2=0,k1=n-1,k2=0,sum=0,sum1=0;
	 if (n!=0)
	 {do {
	     if (a[t1]==b[k1]&&a[t2]==b[k2])
	     	{if (a[t2]<b[k1])
		  	sum--;
		  	else if(a[t2]>b[t1])
		  	sum++;
		  	t2++;k1--;sum1++;}
	     else if (a[t2]!=b[k2])
	      {if (a[t2]>b[k2])
		  {sum++;t2++;k2++;sum1++;}
		  else 
		  {if (a[t2]>b[k1])
		   sum++;
		   else if(a[t2]<b[k1])
		   sum--;
		   t2++;k1--;sum1++;}
		 }
	     else
	     	    {
				 if (a[t1]>b[k1])
		  		  {sum++;t1--;k1--;}
		  	     else 
		  		  {if (a[t2]<b[k1])
				  sum--;
				  else if(a[t2]>b[k1])
				  sum++;
				 t2++;
				 k1--;}
		         sum1++;}
		}while(sum1!=n);
	 printf ("%d\n",200*sum);}
	 }while(n!=0);
}