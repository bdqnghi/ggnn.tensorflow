int main(){
          int n,a[500],i,j,k;
          cin>>n;
          for(i=0;i<n;i++) cin>>a[i];
          for(i=0;i<n-1;i++)                              //??????
        	  for(j=0;j<n-i-1;j++)
        		  if(a[j]>a[j+1])
        		  {
        			  k=a[j];
        			  a[j]=a[j+1];
        			  a[j+1]=k;
        		  }
          for(i=0;i<n;i++) if(a[i]%2!=0) {cout<<a[i];break;}       //????
          for(j=i+1;j<n;j++) if(a[j]%2!=0) cout<<","<<a[j];
          return 0;
}