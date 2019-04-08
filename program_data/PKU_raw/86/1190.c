
int main()
{
	
    int n,fail_n,fail[60],i,k,a,x,b;
	cin>>n;
	
    for(i=0;i<n;i++)
	
    {
		x=0;
	  cin>>fail_n;
	
        for(k=0;k<fail_n;k++)  cin>>fail[k];

        for(k=0;k<fail_n+1;k++)
		{   

			a=0;b=0;
			if(fail[k]+3*(k+1)>60&&fail[k]+3*k<60) {b=1;break;}
			if(fail[k]+3*(k+1)<=60)  a=1;
			else {a=2;x=fail[k-1]+3*(k);break;}
		 
		}
        
	    if(b==1) cout<<fail[k]<<endl;

		if(a==1) cout<<60-3*fail_n<<endl;
		if(a==2) cout<<fail[k-1]+(60-x)<<endl;

		
	  
	  
 }
	
   return 0;
}
