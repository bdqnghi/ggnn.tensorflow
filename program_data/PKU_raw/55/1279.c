
int main()
{
	
    int shu=0,j,i,a,b,mm;
	char m[100],n[100];   
    cin>>a;
    cin.get();
    cin>>m;
	cin>>b;

	 for(i=0;m[i]!='\0';i++)
	 {if(m[i]>=65&&m[i]<=90) m[i]=m[i]+32;}     

	for(i=0;m[i]!='\0'; i++)
     {
          if(m[i]>=48&&m[i]<=57)  mm=m[i]-48;
        else mm=m[i]-97+10;
          shu=shu*a+mm;                           
     }
        
	 if(shu==0) cout<<shu<<endl;
	  
	 for(i=0;shu!=0;i++)
	  { 
		  n[i]=shu%b;
		  if(n[i]>=9) n[i]=n[i]+55;
		  else n[i]=n[i]+48;
		  shu=shu/b;
	  }

	for(j=i-1;j>=0;j--) cout<<n[j];   

	return 0;
     }