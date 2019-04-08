int main()
{ 
  
  char a[200],b[200];
  int c[200];
  int i,j,k,t,m,n;
  while(cin>>a)
  {
	  
	  k=strlen(a);m=0;n=0;
	  for(i=0;i<k;i++)
	  {
		  cout<<a[i];
		  if(i==k-1) cout<<endl;
		  if(a[i]!='('&&a[i]!=')')
			  b[i]=' ';
		  else if(a[i]==')')  {c[m]=i;m++;}//cout<<i<<" ";
	  }
	n=m;//cout<<n<<endl;
	for(i=0;i<n;i++){
       char *p=&a[c[i]];t=0;
	   for(j=0;j<=c[i];j++)
		   if(*p=='(') {t=1;b[c[i]-j]=' ';b[c[i]]=' ';a[c[i]-j]=' ';break;}
		   else p--;
       if(t==0) b[c[i]]='?';
	   }
	for(i=0;i<k;i++)
	{if(a[i]=='(') b[i]='$';
	cout<<b[i];if(i==k-1)cout<<endl;}
  }
return 0;
}     
