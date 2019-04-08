//???
int main()
{
    int A=0,B=0,C=0,i=0,j=0,k=0;                                 //???? 
    char a[3]={0,0,0};                                           //???? 
    for(A=0;A<3;A++)
    {                                                           
        for(B=0;B<3;B++)
        {
            if(A==B)continue;
            for(C=0;C<3;C++)                                       //??A,B,C???            
             {
                  if(A==C||B==C)continue;
                  i=(B>A)+(A==C);
                  j=(A>B)+(A>C);
                  k=(C>B)+(B>A);
                  if(i+j+k==3&i!=j&i!=k&j!=k&i+A==2&j+B==2&k+C==2)              //???????????????????? 
                  {   
                      a[2-A]='A';                                               //????? 
                      a[2-B]='B';
                      a[2-C]='C';
                      cout<<a[2]<<a[1]<<a[0]<<endl;                     
                  }
             }
        }
    }
        return 0;
}
      