int main()
{
	long b=0;
	long a[4][1];
	double t=0;
	int c[5];
	int i,j,f,k;
	for(i=0;i<4;i++)
	{
	   scanf("%ld",&a[i][0]);
	}
	for(i=0;i<4 && a[i][0]!=0;i++)
	{
		b=0;
	  for(k=0;k<5 && a[i][0]!=0;k++)
	  {
         c[k]=(a[i][0]%10);
		 a[i][0]=a[i][0]/10;
	  }
	  for(j=0;j<k;j++)
	  {
		 t=pow(10,(k-1-j));
		 f=(long)t;
		 b=b+f*c[j];
	  }
		printf("%ld\n",b);
	}
   	return 0;

}
