int main()
{
   char x[200],y[200];
   int a,b,i,j,num[200];
   long int n=0;
   cin>>a;
  cin>>x;
   cin>>b;
   int nlen1=strlen(x);
 
   for(i=0;i<=nlen1-1;i++)
   {
       if(x[i]>='0'&&x[i]<='9')
		   num[i]=x[i]-'0';
	   else if(x[i]>='a'&&x[i]<='z')
		   num[i]=x[i]-'a'+10;
	   else if(x[i]>='A'&&x[i]<='Z')
		   num[i]=x[i]-'A'+10;
	   n+=num[i]*((int)pow(a,(nlen1-1-i)));
	}
if(n!=0)
{
   for(i=0;n>=b;i++)
   {
       num[i]=n%b;
	   n=(n-num[i])/b;
   }
   if(n>0)num[i]=n;
   else i-=1;
   for(j=i;j>=0;j--)
   {
      if(num[j]>=0&&num[j]<=9)
		  cout<<num[j];
	  else
	  {y[j]=num[j]-10+'A';
	  cout<<y[j];}
   }
}
else cout<<0;

return 0;
	  
	   
}

