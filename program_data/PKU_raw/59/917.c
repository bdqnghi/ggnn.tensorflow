char c[100][100]={'\0'};
int k=0,l[10000]={0};
int dete(int r)
{
   return l[r];
}
int num(int n,int m)
{
   if(m==0)
	   return k;
   else
	   return num(n,m-1)+dete(m-2);
}
int main()
{
   int n,i,j,m;
   k=0;
   cin>>n;
   for(i=0;i<n;i++)
	   for(j=0;j<n;j++)
		   cin>>c[i][j];
   cin>>m;
   for(i=0;i<n;i++)
	   for(j=0;j<n;j++)
		   if(c[i][j]=='@')
			   k++;
   int t=0;
   while(t<=m)
   {
	   for(i=0;i<n;i++)
		   for(j=0;j<n;j++)
	      {
             if(c[i][j]=='.'&&(c[i-1][j]=='@'||c[i][j-1]=='@'||c[i][j+1]=='@'||c[i+1][j]=='@'))
             {
				 c[i][j]='*';
				 l[t]++;
			 }
	      }
	      for(i=0;i<n;i++)
	         for(j=0;j<n;j++)
	            if(c[i][j]=='*')
	               c[i][j]='@';
	   t++;
   }
   cout<<num(n,m);
 
   return 0;
}
