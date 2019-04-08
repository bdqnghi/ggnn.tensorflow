
int matrix[1000][1000];

 

int main(int argc, char *argv[])
{
    int row,col,k,n,i,j,l[8],p[8],flag=0;
    scanf("%d,%d",&row,&col);;
    for(i=0;i<row;i++)
    {
                    for(j=0;j<col;j++)
                    {
                    cin>>matrix[i][j];
                    if(matrix[i][j]>matrix[i][j-1])
                    {
                    k=j;
                                                    
                    }
                    }
                    p[i]=k;
                                                    
    }
     for(j=0;j<col;j++)
     
     {
                       for(i=0;i<row;i++)
                       {if(matrix[i][j]<matrix[i-1][j])
                       k=i;
                       }
                      
                       l[j]=k;
                       }
                       
    
     
     for(i=0;i<row;i++)
     {
              
                       k=p[i];
                       if(l[k]==i)
                       {
                                  cout<<i<<"+"<<k;
                       flag=1;
                       }
                       }
     if(flag==0)
     cout<<"No"<<endl;
     
                       
                       
       
                                       
                       
                        
    
                                    
                                                                          
                                                                          
    
    
                    
                    
   
                    
                                                                            
                                      
                                      
                    
        return 0;
}
