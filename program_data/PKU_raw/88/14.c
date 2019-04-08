int main()
{
   char str[100],out[100][100];
   int len,k,i=0,j=0,m;
   cin.getline(str,31,'\n');
   len=strlen(str);
   for(k=0;k<len;k++)
   {
      if(str[k]>='0' && str[k]<='9')
	  {
	     out[i][j]=str[k];
		 j++;
	  }
	  else if(str[k-1]>='0' && str[k-1]<='9')
	  {
	     i++;
		 j=0;
	  }
	  else continue;
   }
   for(m=0;m<=i;m++)
   {
	  if(out[m]=="\0") break;
	  cout<<out[m];
	  cout<<endl;
   }
   return 0;
}