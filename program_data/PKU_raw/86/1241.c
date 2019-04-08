int main()
{
   int x,a[100],b[100][100],i,j,m[100];
   cin>>x;
   for(i=0;i<x;i++)
   m[i]=60;   
   for(i=0;i<x;i++)
   {
	   cin>>a[i];
	   for(j=0;j<a[i];j++)
		   cin>>b[i][j];
   }
   for(i=0;i<x;i++)
   for(j=0;j<a[i];j++)
   {
	   if(b[i][j]<=57-3*j)m[i]=m[i]-3;
	   else if(b[i][j]==58-3*j)m[i]=m[i]-2;
       else if(b[i][j]==59-3*j)m[i]=m[i]-1;
	   else if(b[i][j]==60-3*j)m[i]=m[i];
   }
   for(i=0;i<x;i++)
	   cout<<m[i]<<endl;
}