int main()
{
    int b[5]={1,2,3,4,5},t[5];
    int s,k,e,y,i,f,sc,l;
    for(s=3;s>=0;s--)
        {
                     if(b[s+1]>b[s])
                     {
                                    e=b[s];
                                    for(k=4;b[k]<e;k--)
                                    {}
                                    b[s]=b[k];
                                    b[k]=e;
                                    for(y=4;y>(4+s+1)/2;y--)
                                    {
                                       e=b[y];
                                       b[y]=b[4+s+1-y];
                                       b[4+s+1-y]=e;
                                    }
                                    s=4; 
                                    if(b[4]==2||b[4]==3) continue;
                                    for(i=0;i<5;i++) {if(b[i]==1)  f=i;
                                    if(b[i]==2)  sc=i;}
                                    for(i=0;i<5;i++){if(i!=f&&i!=sc)  t[i]=-1;else t[i]=1;}
                                    
                                    l=t[0]*(b[4]==1)+t[1]*(b[1]==2)+t[2]*(b[0]==5)+t[3]*(b[2]!=1)+t[4]*(b[3]==1);
                                             if(l==2)  {printf("%d %d %d %d %d\n",b[0],b[1],b[2],b[3],b[4]); } 
                     }
        }        
      getchar();getchar();getchar();            
}
