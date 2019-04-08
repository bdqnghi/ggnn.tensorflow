int main()
{
    int A,B,C,a[3][2],i=0,j=0;
    for(A=0;A<3;A++)
        for(B=0;B<3;B++)
            for(C=0;C<3;C++)
            {
                if((A!=B)&&(B!=C)&&(A!=C))
                {
                    if((B>A)+(C==A)+A==2)
                    {
                        if((A>B)+(A>C)+B==2)
                        {
                            if((C>B)+(B>A)+C==2)
                            {
                                if(A==0&&B==1&&C==2)cout<<"ABC";
                                if(A==0&&B==2&&C==1)cout<<"ACB";
                                if(A==1&&B==0&&C==2)cout<<"BAC";
                                if(A==1&&B==2&&C==0)cout<<"CAB";
                                if(A==2&&B==1&&C==0)cout<<"CBA";
                                if(A==2&&B==0&&C==1)cout<<"BCA";
                            }
                              else continue;
                            }
                            else continue;
                        }
                        else continue;
                    }
                    else continue;
                }
        return 0;
    }
                    
                                
      
        
        
        
                
