
//******************
int n=0,num=0,i=0;
//******************
void upside(int x)
{
   int a[5]={0},y=0,z=0,len=0,len0=0;
   if(x>0)
   {
	   
	   for(i=0;i<5;i++)
	   {
			a[i]=x%10;
		   	x=x/10;
			if(x==0)
			{	
				len=i;
				break;
			}
	   }
	   for(i=0;a[i]==0;i++)
	  {
		 len0++;  
		 
	   }
	  for(i=len0;i<=len;i++)
	 {
		   cout<<a[i];
	  }
   }

   
   else if(x==0)
   cout<<"0"<<endl; 
   else if(x<0)
   {
        x=0-x;
        
	   for(i=0;i<5;i++)
	   {
			a[i]=x%10;
		   	x=x/10;
			if(x==0)
			{	
				len=i;
				break;
				
			}
	   }
	   for(i=0;a[i]==0;i++)
	  {
		 len0++;  
		 
	   }
	   cout<<"-";
	  for(i=len0;i<=len;i++)
	 {
		   cout<<a[i];
	  }
	 }
}


int main()
{
	for(int j=0;j<6;j++)
    {
    cin>>n;
    upside(n);
    cout<<endl;
    }
}

