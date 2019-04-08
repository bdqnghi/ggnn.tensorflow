int main()
{
   int x[16],i,j,k;
   for(i=0;i<15;i++)
	   x[i]=0;
   for(i=0;;i++)
   {
	   cin>>x[i];
	   if(x[i]==-1)
		   break;
	   if(x[i]==0)
	   {
           int t=0;
		   for(j=0;j<i;j++)
			   for(k=0;k<i;k++)
				   if(x[j]==2*x[k])
				   {
                        t++;
				   }
           cout<<t<<endl;
		   i=-1;
	   }
   }
   return 0;
}