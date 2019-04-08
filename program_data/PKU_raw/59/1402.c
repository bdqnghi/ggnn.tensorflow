int main(){
          char c[101][101],d[101][101];
          int n,m,i,j,k,t=0;
          cin>>n;
          for(i=1;i<=n;i++)
        	  for(j=1;j<=n;j++)
        	     cin>>c[i][j];
          cin>>m;
          for(k=0;k<m-1;k++)
          {
        	  for(i=1;i<=n;i++)
        	      for(j=1;j<=n;j++)
        	      {
        	    	  if(c[i][j]=='@')
        	    	  {
        	    		  if(c[i-1][j]=='.') d[i-1][j]='@';
        	    		  if(c[i+1][j]=='.') d[i+1][j]='@';
        	    		  if(c[i][j-1]=='.') d[i][j-1]='@';
        	    		  if(c[i][j+1]=='.') d[i][j+1]='@';
        	    	  }
        	      }
        	  for(i=1;i<=n;i++)
        	      for(j=1;j<=n;j++)
        	      {
        	    	  if(d[i][j]=='@')  c[i][j]=d[i][j];
        	      }
          }
          for(i=1;i<=n;i++)
        	  for(j=1;j<=n;j++)
        		  if(c[i][j]=='@')  t+=1;
          cout<<t;
	      return 0;
}
