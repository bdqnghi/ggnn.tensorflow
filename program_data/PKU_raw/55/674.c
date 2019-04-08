
int main()
{	char c[1][33],e[1][33]={1};int i=0, j=0,t=0;
   long f,k,m=1,a,b;
     long s=0;int d[1000];
  
cin>>a;
	cin>>c[0];  cin>>b;
	if(c[0][0]==48){cout<<s;}
   else{ 
         while(c[0][i]!='\0'){i++;}
              i=i-1;
                   for(j=0;j<=i;j++){if(i>j){for(f=0;f<i-j;f++)m=m*a;}
                  if(c[0][j]<65) k=(c[0][j]-48)*m;
                  if(c[0][j]>=65&&c[0][j]<97)k=(c[0][j]-55)*m;
                  if(c[0][j]>=97)k=(c[0][j]-87)*m;

                        s=s+k;m=1;}    
           while(s>0){d[t]=s%b;if(d[t]>9)e[0][t]=d[t]+55;
                       s/=b;t++;}
           for(j=t-1;j>=0;j--){if(e[0][j]!='\0'&&e[0][j]!=1)cout<<e[0][j];
					else cout<<d[j]; }
        }					
return 0;}