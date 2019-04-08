int main()
{
   char str1[200],str2[100][20];
   cin.getline(str1,200);
   int le,i,j,k=0;
   le=strlen(str1);
   for(i=0;i<=le-1;i++)
   {
	   if(i==0||(str1[i-1]==' '&&str1[i]!=' '))
		   {
		         for(j=0;j<=19;j++)
		         {
		        	 if(str1[i+j]!=' '&&str1[i+j]!='\0')
		        		 str2[k][j]=str1[i+j];
		        	 else
		        	 {
		        		 str2[k][j]='\0';
		        		 k=k+1;
		        		 break;
		        	 }

		         }
		   }
   }
   cout<<str2[0];
   for(i=1;i<=k-1;i++)
	   cout<<" "<<str2[i];
   return 0;
}
