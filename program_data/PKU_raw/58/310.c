int main()
{
   int n;
   int i,j;
   char str[1000][81];
   int a[1000];

   cin>>n;
   cin.get();
   for(i=0;i<n;i++)
   {
          cin.getline(str[i],100);
		  if(((str[i][0]=='_')||(str[i][0]>=65&&str[i][0]<=90)||(str[i][0]>=97&&str[i][0]<=122))==1)
		  {a[i]=1;}
		  else
		  {a[i]=0;}
   
   }

   for(i=0;i<n;i++)
	  {
		  for(j=1;str[i][j]!='\0';j++)
		  {
			  if(((str[i][j]=='_')||(str[i][j]>=65&&str[i][j]<=90)||(str[i][j]>=97&&str[i][j]<=122)||(str[i][j]>=48&&str[i][j]<=57))==0)
			  {a[i]=0;}
			  
		  }
      }
   for(i=0;i<n;i++)
   {cout<<a[i]<<endl;}

   return 0;


}