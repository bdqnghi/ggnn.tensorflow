int main()
{
    int i,j,k,l,p=0,a[5],h;     //p???????????1 
    char b[5],c;
    for (i=1;i<6;i++)
    {
       for (j=1;j<6;j++)
       {
          if (j==i) continue;  //????????? 
          else
          {
              for (k=1;k<6;k++)
              {
                  if (k==j||k==i) continue; //????????? 
                  else
                  {
                    for (l=1;l<6;l++)
                    if (l!=i&&l!=j&&l!=k&&i+j==k+l&&
                    i+l>j+k&&i+k<j)
                    {
                                 p=1;
                                 break; //???????p??1????? 
                    }
                  }
                  if (p==1) break; //p??1?????
              }
          }
          if (p==1) break;  //p??1????? 
       }
       if (p==1) break;     //p??1????? 
    }     
    a[1]=i;
    a[2]=j;
    a[3]=k;
    a[4]=l;
    b[1]='z';
    b[2]='q';
    b[3]='s';
    b[4]='l';
    for (i=1;i<5;i++)
       for (j=i+1;j<5;j++)
          if (a[i]<a[j])
          {
                    h=a[i];
                    a[i]=a[j];
                    a[j]=h;
                    c=b[i];
                    b[i]=b[j];
                    b[j]=c;
          }    //?? 
    cout<<b[1]<<' '<<a[1]*10<<endl; 
    cout<<b[2]<<' '<<a[2]*10<<endl; 
    cout<<b[3]<<' '<<a[3]*10<<endl; 
    cout<<b[4]<<' '<<a[4]*10;        //??      
    return 0;
}
