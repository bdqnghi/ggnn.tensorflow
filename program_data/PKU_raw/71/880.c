




//?????
int main()
{
   int year,c,d,n,j,i,a[13],sum=0;//c,d????a[12]?12??????sum????????
   a[1]=a[3]=a[5]=a[7]=a[8]=a[10]=a[12]=31;
   a[4]=a[6]=a[9]=a[11]=30;
   cin>>n;
   for(j=1;j<=n;j++)
   {
     cin>>year;
	 if(year%4==0&&year%100!=0||year%400==0)
		 a[2]=29;
	 else a[2]=28;//??2????
	 cin>>c>>d;
         sum=0;
	 if(c<d)
	{       
		for(i=c;i<d;i++)
        sum=sum+a[i];
	 
	 }
	else if(c>d)
	 {
           
	   for(i=d;i<c;i++)
        sum=sum+a[i];
         }
	 if(sum%7==0)//????????
		 cout<<"YES"<<endl;
	 else cout<<"NO"<<endl;
	 

   }
   return 0;
}
