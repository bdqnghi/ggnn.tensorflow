int main()
{char p[10];
	while(cin>>p)
	{
		char b[4];int max=0,i,j,len1;
		cin>>b;
		char ma=*p;
		len1=strlen(p);
       for(i=0;i<len1;i++)
		   if(p[i]>ma)
		   {ma=p[i];max=i;  }
		 
		   for(j=0;j<=max;j++)
			   cout<<p[j];
		   cout<<b;
		   for(j=j;j<len1;j++)
			   cout<<p[j];
		   cout<<endl;
		   
	}
}