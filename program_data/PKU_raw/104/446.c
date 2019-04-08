//************************//
//*?????????    *//
//*?????            *//
//*???2010.11.26      *//
//************************//
void h(int,int a[],int);
void m(int,int b[],int);
int main()
{
 int x,y,j,t,flag=1;
 int a[100],b[100];
 for(j=0;j<100;j++)
 {
   a[j]=0;
   b[j]=0;
 }
 cin>>x>>y;
 h(x,a,-1);
 m(y,b,-1);
 for(j=0;a[j]!=0;j++)
 {
   for(t=0;b[t]!=0;t++)
   {
     if(a[j]==b[t])
	 {
	   cout<<a[j]<<endl;
	   flag=0;
	   break;
	 }
   }
   if(flag==0)
	   break;
 }
 return 0;
}
void h(int n,int a[],int i)
 {
   i++;
   if(n==1)
	   a[i]=n;
   else
   {
	   if(n%2==0)
	   {
		   a[i]=n;
           h(n/2,a,i);
	   }
	   else
	   {
	       a[i]=n;
		   h((n-1)/2,a,i);
	   }   
   }
}
void m(int n,int b[],int k)
 {
   k++;
   if(n==1)
	   b[k]=n;
   else
   {
	   if(n%2==0)
	   {
		   b[k]=n;
           m(n/2,b,k);
	   }
	   else
	   {
	       b[k]=n;
		   m((n-1)/2,b,k);
	   }   
   }
}