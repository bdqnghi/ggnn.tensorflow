int main()
{
    int i,j,n,r=0,y=0;
    char s[100][100];
    double b[100],m[100],w[100],temp;
    scanf("%d",&n);
    for(i=0;i<2*n;i++)
    {
                    scanf("%s",s[i]);
    }
    for(i=0;i<2*n;i++)
    {
                      if(((i%2)==0)&&(s[i][0]=='m'))
                      {
                                                   m[r]=atof(s[i+1]);
                                                   r++;
                      }
                      else if(((i%2)==0)&&(s[i][0]=='f'))
                      {
                           w[y]=atof(s[i+1]);
                           y++;
                      }
    } 
    for(i=1;i<r;i++)
    {
                    for(j=0;j<r-i;j++) 
                    {
                                       if(m[j]>m[j+1])
                                       {
                                                      temp=m[j];
                                                      m[j]=m[j+1];
                                                      m[j+1]=temp;
                                       } 
                    }
    }
     for(i=1;i<y;i++)
    {
                    for(j=0;j<y-i;j++) 
                    {
                                       if(w[j]<w[j+1])
                                       {
                                                      temp=w[j];
                                                      w[j]=w[j+1];
                                                      w[j+1]=temp;
                                       } 
                    }
    }
    printf("%.2f",m[0]);
    for(i=1;i<r;i++) 
    printf(" %.2f",m[i]);
    for(i=0;i<y;i++) 
    printf(" %.2f",w[i]);
}     