int main(){
          int a[4],i,j,t;
          char b[4]={'z','q','s','l'},k;
          for(a[0]=10;a[0]<=50;a[0]=a[0]+10)
          {
        	  for(a[1]=10;a[1]<=50;a[1]=a[1]+10)
        	  {
        		  for(a[2]=10;a[2]<=50;a[2]=a[2]+10)
        		  {
        			  for(a[3]=10;a[3]<=50;a[3]=a[3]+10)
        			  {
        				  if(a[0]+a[1]==a[2]+a[3]&&a[0]+a[3]>a[1]+a[2]&&a[0]+a[2]<a[1])
        				  {
        					  for(i=0;i<3;i++)
        					  {
        						  for(j=1;j<4-i;j++)
        						  {
        							  if(a[i]<a[i+j])
        						      {
        							       t=a[i+j];
        							       a[i+j]=a[i];
        							       a[i]=t;
        							       k=b[i+j];
        							       b[i+j]=b[i];
        							       b[i]=k;
        						      }
        						  }
        					  }
        				  for(i=0;i<4;i++)  cout<<b[i]<<" "<<a[i]<<endl;
        				  }
        			  }
        		  }
        	  }
          }
	      return 0;
}