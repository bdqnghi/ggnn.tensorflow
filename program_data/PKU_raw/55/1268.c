


int main()
{  
	int a,b,c,i,d=0,e; 
    char h[25];
	char n[20];
	int s[20];
	
	cin>>a>>n>>b;
	c=strlen(n);
	for(i=0;i<=c-1;i++)
	{
		if(isdigit(n[i])!=0)
			d=d+(n[i]-48)*(int)pow((double)a,c-1-i);
		else if(islower(n[i])!=0)
			d=d+(n[i]-87)*(int)pow((double)a,c-1-i);
		else
			d=d+(n[i]-55)*(int)pow((double)a,c-1-i);

	}
   for(i=0;d>=b;i++)
   {
	   if(d%b<10)
		   h[i]=d%b+48;
	   else
		   h[i]=d%b+55;
	   d=d/b;
   }
      if(d<10)
		  h[i]=d+48;
	  else
		  h[i]=d+55;
	  for(;i>=0;i--)
		  cout<<h[i];

	return 0;
	
}

