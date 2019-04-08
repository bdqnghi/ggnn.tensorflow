int main()
{
	int w;
	cin>>w;
  int a[13],b[13];
  a[0]=0,b[0]=0;
  b[1]=31,b[3]=31,b[5]=31,b[7]=31,b[8]=31,b[10]=31,b[12]=31;
  b[4]=30,b[6]=30,b[9]=30,b[11]=30,b[2]=28;
  int i,j;
  for (i=1;i<=12;i++)
  {
	  for (j=1;j<=i;j++)
	  {
	      a[j]=a[j-1]+b[j-1];
	  }
  }
   for (i=1;i<=12;i++)
   {
	   a[i]=a[i]+12;
   }
   for (i=1;i<=12;i++)
   {
	   if ((w+a[i])%7==5)
	   {
		   cout<<i<<endl;
	   }
	   else
	   {
		   continue;
	   }
   }

}

		