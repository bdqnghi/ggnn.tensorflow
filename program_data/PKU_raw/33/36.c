int main()
{
   int n,len,i,j;
   char str[256];
   cin>>n;
   for(i=0;i<n;i++)
   {
      cin>>str;
	  len=strlen(str);
	  for(j=0;j<len;j++)
	  {
	     switch(str[j])
		 {
		    case 'A': cout<<'T';break;
            case 'T': cout<<'A';break;
			case 'C': cout<<'G';break;
			case 'G': cout<<'C';break;
		 }
	  }
	  cout<<endl;
   }
   return 0;
}
