int main()
{
	int n , m=0 , s=0 , h;
	cin >>n;
	cout <<endl;
	for (int i=6; i <= n;i=i+2)//?????????
	{
	   for (int j=3;j <= (i/2);j=j+2)
	   {
	       h=0;m=0;s=0;//????????
	       for (int k =1;k <= floor(sqrt(j));k=k+2)
		 if (j%k==0) m=m+1;//??j?????
	       if (m==1) 
	          {
		     for (int l =1;l <= floor(sqrt(i-j));l=l+2)
		      if ((i-j)%l==0) s=s+1;//??i-j?????
		     if (s==1) 
		        {
			  cout <<i<<"="<<j<<"+"<<i-j<<endl;
			  h=h+1;
		         }
		 }
	       if (h==1)break; //??????????????????
	   }
	}
	return 0;
}

