int main()
{   
	char a[100],b[100],c[100];int i,j,k;
	cin.getline(a,100,'\n');
	cin.getline(b,100,'\n');
	cin.getline(c,100,'\n');
      int l1=strlen(a),l2=strlen(b),l3=strlen(c);
	  for(i=0; ;i++)
		  if(a[i]==' ') break;
	   for(j=0;j<=i-1;j++)
		  {
			  if(a[j]!=b[j])
				  {
					  for(k=0;k<=i-1;k++)
					  cout<<a[k];
					  break;
			  }
			  if(j==i-1)
				  cout<<c;
	   }


		 for(i=0;i<=l1-1;i++)
		 {
			 if(a[i]!=' ')
				 continue;
			 for(j=0;j<=l2-1;j++)
			 {
				 if(a[i+j+1]!=b[j])
				 {
					 cout<<" ";
					 for(k=i+1; ;k++)
					 {
						 if(a[k]==' '||k==l1)
							 break;
						 else
							 cout<<a[k];
					 }
					 break;
				 }
				 if(j==l2-1)
				 {
					 cout<<" "<<c;
					 
				 }
			 }
		 }
		 return 0;
}		 
