int main()
{
   int m,i,j,z,k,h;
   scanf("%d",&m);
   for(i=3;i<=m/2;i+=2)
   {
	   z=1;
       k=m-i;
	   for(j=2;j<=sqrt(i);j++)
	   {
		   if(i%j==0)z=0;
	   }
	   for(h=2;h<=sqrt(k);h++)
	   {
		   if(k%h==0)z=0;
	   }
	   if(z!=0)printf("%d %d\n",i,k);
   }
}
