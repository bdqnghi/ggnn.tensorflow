char x1,x2;
int sum=0;
int c[1000][1000]={0};
int doing(char b[])
{
	int i=0,j=0,z=0;
	for(i=0;i<sum;i++)
	{
   if(b[i]==x1)
      {
	   j=i+1;
	   while(b[j]=='\0')
		   j++;
	   if(b[j]==x2)
	      {
		   c[i][j]=1;
		   b[i]='\0';
		   b[j]='\0';
		   z=0;
		   for(i=0;i<sum;i++)
		      {
			 if(b[i]!='\0')
		     z++;
		      }
		   if(z!=0)
			   doing(b);
		    break;
	      }
	  
       }
	}
  return 0;
}
int main()
{
	int i=0,k=0,l=0;
	char a[1000];
	cin.getline(a,1000);
	
		while(a[i]!='\0')
			i++;
	sum=i;
	x1=a[0];
	i=0;
	while(a[i]==x1)
	{
		i++;
	}
	x2=a[i];
	//cout<<x2;
	doing(a);
	for(k=0;k<1000;k++)
		for(l=0;l<1000;l++)
			if(c[l][k]==1)
				cout<<l<<" "<<k<<endl;
	return 0;
}
