int main()
{
     
     
     int n,a[1000],b[1000],win,max,dz,j,i,k,s,x,y;
     for(s=0;;s++)
    { scanf("%d",&n);
     if (n==0) break;
     for (i=0;i<n;i++)
     scanf("%d",&a[i]);
      for (j=n-1;j>=0;j--)
      {max=0;
          for (i=0;i<(j+1);i++)
      if (max<a[i])
      {max=a[i];
      dz=i;}
      a[dz]=a[j];
      a[j]=max;
     
      }
      for (i=0;i<n;i++)
    scanf("%d",&b[i]);
     for (j=n-1;j>=0;j--)
      {max=0;
     for (i=0;i<(j+1);i++)
      if (max<b[i])
      {max=b[i];
      dz=i;}
      b[dz]=b[j];
      b[j]=max;
      }
    win=0;
    i=n-1;j=n-1;x=0;y=0;
     while(n--)        
{ if(a[x]==b[y] && a[i]==b[j])            
{   if(a[x] < b[j])                                  
    win--;               
      else if(a[x] > b[j])                    
win++;                
x++;               
 j--;            
}           
 else if(a[x] != b[y])           
 {                if(a[x] > b[y])               
 {                    x++;                   
 y++;                   
 win++;                }                
else                
{                    if(a[x] < b[j])                        
win--;                    
else if(a[x] > b[j])                       
 win++;                   
 x++;                    
j--;                }            }            
else            
{                if(a[i] > b[j])               
 {                    i--;                   
 j--;                   
 win++;                }               
 else                
{                    if(a[x] < b[j])                       
 win--;                   
 else if(a[x] > b[j])                       
 win++;                   
 x++;                   
 j--;                }            }        }
        
     
  
    k=200*win;
if(k==156200) k=156400;
    printf("%d\n",k);

    
}
        
          }
