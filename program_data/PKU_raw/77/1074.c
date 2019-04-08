
    int i,l,count;
    char s[101];
    int a[101],y[101];

void ry(int y[])
{
     int i,j;
     if(count==l)
       return;
     for(i=0;i<l;i++)
        if(y[i]==1)
        {
           j=i+1;
           while(y[j]==0)
             j++;        
           if(j>=l)
             continue;    
           if((a[i]==0)&&(a[j]==1))
           {
              y[i]=0;
              y[j]=0;
              count+=2;
              printf("%d %d\n",i,j);
              ry(y);
              return;                
           }
        }
}


int main()
{

    

    gets(s);
    l=strlen(s);
    
    for(i=0;i<l;i++)
       a[i]=!(s[i]==s[0]);
    
    a[l]=-1;
    
    for(i=0;i<l;i++)
       y[i]=1;
    y[l]=1;
    
    count=0;    
    ry(y);
    //printf("2 3\n5 6\n4 7\n8 9\n1 10\n12 13\n11 14\n0 15\n");
    
    
    
    return 0;
}
