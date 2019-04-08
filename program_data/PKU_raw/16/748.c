int main()
{
   int n,a[4];
   cin>>n;
   if(n==10000) cout<<"00001"<<endl;
   else if(n==1000) cout<<"0001"<<endl;
   else if(n>1000&&n<10000)
    {   
          a[3]=n/1000;
	a[2]=(n%1000)/100;
	a[1]=(n-a[3]*1000-a[2]*100)/10;
	a[0]=n-a[3]*1000-a[2]*100-a[1]*10;
	cout<<a[0]*1000+a[1]*100+a[2]*10+a[3]<<endl;
   }
   else if(n==100) cout<<"001";
   else if(n>100&&n<1000)
   {
	  a[2]=n/100;
	  a[1]=(n%100)/10;
	  a[0]=n-a[2]*100-a[1]*10;
	  cout<<a[0]*100+a[1]*10+a[2];
   }
   else if(n==10) cout<<"01";
   else if(n>10&&n<100)
   {
	a[1]=n/10;
	a[0]=n-a[1]*10;
	cout<<a[0]*10+a[1];
   }
   else if(n>=0&&n<10) cout<<n;
   return 0;
}
