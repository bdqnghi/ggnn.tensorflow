int main()
{
 int i,j,k,t,n;
 cin>>n;
 int a[n];
 for(i=0;i<n;i++)
	 cin>>a[i];
 cin>>k;
 for(i=0;i<n;i++)
	 if(a[i]==k)
	 {for(j=i;j<n-1;j++)
		 a[j]=a[j+1];
	 n--;
	 i--;
	 }
 cout<<a[0];
 for(t=1;t<n;t++)
	 cout<<" "<<a[t];
return 0;
}

