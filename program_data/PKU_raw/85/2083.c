int main()
{
   int n;
   cin>>n;
   cin.get();
  
   for(int i=0;i<n;i++)
	  { char a[21];
		  int judge=1;
		  cin.getline(a,21);
		  if(a[0]>='0'&&a[0]<='9')
		  judge=0;
		  else
		  for(int j=0;j<strlen(a);j++)
		  {  
			  if((a[j]<'0'||a[j]>'9')&&(a[j]<'A'||a[j]>'Z')&&(a[j]<'a'||a[j]>'z')&&a[j]!='$'&&a[j]!='_')
			{
				 judge=0;  break;
			 }
			 /* if (a[j]=='_' && a[j+1]=='_') 
			  {
				  judge=0;break;
			  }*/
		}
		  if(judge==1) cout<<"yes"<<endl;
		  else if(judge==0)  cout<<"no"<<endl;
      }

   return 0;
	
}