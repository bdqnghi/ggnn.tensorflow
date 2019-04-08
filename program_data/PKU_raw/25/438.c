int main()
{
   int m,n,i,j,k,jin; 
   int a[35],b[35];//n????????
   cin>>m;
   for(i=1;i<35;i++)a[i]=0;
   a[0]=2;
   for(i=1;i<m;i++)
   {
	   jin=0;
      for(j=0;j<35;j++)
	  {
	      b[j]=(2*a[j]+jin)%10;
		  jin=(2*a[j]+jin)/10;
	  }
      for(j=0;j<35;j++)
	  {a[j]=b[j];}

   }
   for(i=34;i>=0;i--)
   {
      if(a[i]!=0)break;
   }
   if(m==0)cout<<1;
   else if(i==-1)cout<<a[0];
   else
   {
	   for(j=i;j>=0;j--)cout<<a[j];
   }
   
return 0;
}