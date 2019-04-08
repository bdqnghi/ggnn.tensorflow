int main()
{ int i,j,m,n,t,a[5][5],k;
 for(i=0;i<=4;i++)
 { for(j=0;j<=4;j++)
 { cin>>a[i][j];}}
 int *p;
 p=&a[0][0];
 n=0;
 for(;p<&a[0][0]+25;p++)
 { m=0;
 t=(p-&a[0][0])%5;
 k=(p-&a[0][0])/5;
	 for(i=0;i<=4;i++)
	 { 
	   if((*(*(a+i)+t))<*p)
	   {m++;}
	   if( *(*(a+k)+i)>*p)
	   {m++;}
	 
	 }  if(m==0)
		   {   t++; k++;
			   cout<<k<<" "<<t<<" "<<*p<<endl;
	   n++;}
 }
 if(n==0)
 {cout<<"not found";}
return 0;}