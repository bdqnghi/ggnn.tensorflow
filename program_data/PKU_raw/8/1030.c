int m , n , a1[10000] , a2[10000], a3[10000];
void X1()//???????????????
{
   cin>>m>>n;
   cout<<endl;
   for (int i=0;i<m;i++)
	   cin>>a1[i];
   for (int i=0;i<n;i++)
	   cin>>a2[i];
}
void X2()//???????????
{
	int change;
	for (int i=0;i<m-1;i++)
	{
	   for (int j=i+1;j<m;j++)
	   {
	      if (a1[i]>a1[j]) 
		  {
		     change=a1[i];
			 a1[i]=a1[j];
			 a1[j]=change;
		  }
	   }
	}
	for (int i=0;i<n-1;i++)
	{
	   for (int j=i+1;j<n;j++)
	   {
	      if (a2[i]>a2[j]) 
		  {
		     change=a2[i];
			 a2[i]=a2[j];
			 a2[j]=change;
		  }
	   }
	}
}
void X3()//?????????
{
	for (int i=0;i<m;i++)
		a3[i]=a1[i];
	for (int i=0;i<n;i++)
		a3[i+m]=a2[i];
}
void X4()//????????
{
   for (int i=0;i<m+n-1;i++)
		cout<<a3[i]<<" ";
	cout<<a3[m+n-1];
	cout<<endl;
}
int main()
{
	X1();//??????
	X2();
	X3();
	X4();
	return 0;
}


