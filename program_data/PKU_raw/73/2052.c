int main()
{
        int ju[10][10],i,j,d=0,k,e=0,f=0;
        for(i=0;i<5;i++)
                 for(j=0;j<5;j++)
                 cin>>ju[i][j];
        for(i=0;i<5;i++)
        {
                        
                        for(j=0;j<5;j++)
                        {d=0;
                                        for(k=0;k<5;k++)
                                        {     
                                                        if(ju[i][j]>ju[i][k])
                                                        {
                                                                             d++;
                                                        }
                                        }
                                        if(d==4)  break;
                        }e=0;
                        for(k=0;k<5;k++)
                        {
                                        if(ju[i][j]<ju[k][j])
                                        e++;
                        }
                        if(e==4) {cout<<i+1<<' '<<j+1<<' '<<ju[i][j]<<endl;f++;}
        }
        if(f==0)   cout<<"not found";
        
             
return 0;
}
