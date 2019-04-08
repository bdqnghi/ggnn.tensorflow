
int main()
{
  int x,max,secondmax,n,t,i;
  scanf("%d %d",&n,&x);
  secondmax=max=x;
	  for(i=1;i<n;i++)
	  {
		  scanf("%d",&t);
		  if(t>max)
		  {
			  secondmax=max;
			  max=t;
		  }
		  else if(t>secondmax)
		  {
			  secondmax=t;
		  }
		  else if((max==secondmax)&&(i==1))
		  {
			  t=secondmax;
		  }
	  }
   printf("%d\n%d\n",max,secondmax);
   return 0;
}