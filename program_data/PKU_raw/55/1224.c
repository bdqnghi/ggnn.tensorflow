
int main()
{
	
    int num=0,j,i,a,b,x;
	char m[50],n[50];   
    cin>>a;
    cin.get();
    cin>>m;
	cin>>b;

	 for(i=0;m[i]!='\0';i++)
	 {if(m[i]>=65&&m[i]<=90) m[i]=m[i]+32;}     //??????????

	for(i=0;m[i]!='\0'; i++)
     {
          if(m[i]>=48&&m[i]<=57)  x=m[i]-48;
        else x=m[i]-97+10;
          num=num*a+x;                           //?a??????10????num???
     }
        
	 if(num==0) cout<<num<<endl;
	  
	 for(i=0;num!=0;i++)//??????b????n????
	  { 
		  n[i]=num%b;
		  if(n[i]>=9) n[i]=n[i]+55;
		  else n[i]=n[i]+48;
		  num=num/b;
	  }
     

	for(j=i-1;j>=0;j--) cout<<n[j];   

	cout<<endl;

	return 0;
     }

   