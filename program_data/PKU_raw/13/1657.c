int main(){
	      int a[20000],n,i,j;
	      cin>>n;
	      for(i=0;i<n;i++){
	    	  cin>>a[i];
	    	  for(j=0;j<i;j++)
	    	  {
	    		  if(a[j]==a[i]) a[i]=0;
	    	  }
	      }
	      cout<<a[0];
	      for(i=1;i<n;i++) if(a[i]!=0) cout<<" "<<a[i];
	      return 0;
}
