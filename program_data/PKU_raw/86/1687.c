int main()
{
   int n,m,i,a,b[100],k;
   cin>>n;
   for(i=0;i<n;i++)						//????n???
   {
	   cin>>m;
	   if(m==0)							//m=0????
		   cout<<60<<endl;
	   else
	   {
			for(k=0;k<m;k++)			//????m???
			{
				cin>>a;
				b[k]=a;
			}
			for(k=m-1;k>=0;k--)			//?????????
			{
				if(b[k]+3*(k+1)<=60)
				{
					cout<<60-3*(k+1)<<endl;
					break;
				}
				else if(b[k]+3*k<=60)
				{
					cout<<b[k]<<endl;
					break;
				}
			}
	   }
   }
   return 0;
}