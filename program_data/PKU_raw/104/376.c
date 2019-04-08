/*??
1000012872
 */
int f(int x,int y);//??????????????
int main()
{
	int x,y;
	cin>>x>>y;//x,y?????
	cout<<f(x,y);//????
	return 0;
}
int f(int x,int y)
{
	int m,n,p,q,i,j,c;
	if(x>=1&&y>=1)//
	{
	    m=x;
	    n=y;
	    int a[x],b[y];
	    a[0]=x;
	    for(i=1;i<=m;i++)
	    {
	      if(x>=2)
		   {
		     a[i]=x/2;
	           x=x/2;

	        }
	      else break;
	    }

	      p=i-1;
              b[0]=y;
               for(i=1;i<=n;i++)
               {
	                 if(y>=2)
	                   {
	                     b[i]=y/2;
	                     y=y/2;
	                    }
	                 else break;
               }
                q=i-1;

                for(i=p,j=q;i>=0,j>=0;i--,j--)
                	if(a[i]==b[j])
                	c=a[i];
                	return c;
	}
	
	
}



