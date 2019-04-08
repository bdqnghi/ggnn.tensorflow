int main()
{
	char a[2][80];
	int i,j;
	for(i=0;i<2;i++)
	{
	  cin.getline(a[i],80);			
	  for(j=0;j<strlen(a[i]);j++)
	  {
	      if(a[i][j]>='A' && a[i][j]<='Z')
                {  
		a[i][j]=a[i][j]+32; 
	       }
	  }
         }
	if(strcmp(a[0],a[1])==1)
		cout<<'>'<<endl;
	else if(strcmp(a[0],a[1])==0)
		cout<<'='<<endl;
	else if(strcmp(a[0],a[1])==-1)
		cout<<'<'<<endl;             
	return 0;
}