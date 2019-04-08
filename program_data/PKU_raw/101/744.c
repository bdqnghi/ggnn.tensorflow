/*
  Name:???
  Author: 120012757(chenminhuan)
  Date: 15/10/12 21:40

*/
void            print(int A,int B,int C){               //??????? 
                //cout<<A<<B<<C<<endl;
                if (A==0) cout<<"A";else
                if (B==0) cout<<"B";else
                cout<<"C"; 
                
                if (A==1) cout<<"A";else
                if (B==1) cout<<"B";else
                cout<<"C"; 
                
                if (A==2) cout<<"A";else
                if (B==2) cout<<"B";else
                cout<<"C"; 
}
int main()
{                     
    
    for(int A = 0 ;A < 3; ++ A)                         //??A???
            for (int B = 0; B < 3 ; ++ B)               //??B??? 
            for (int C = 0; C < 3 ; ++ C)               //??C??? 
            if (A!=B && A!=C && A!=B) 
            if ( (2 - A == (B>A)+(C==A) ) && (2 - B == (A>B)+(A>C)) && (2 - C) ==(C>B)+(B>A))
            //????????? 
                 print(A,B,C); 
                                                          
    
 
    return 0;
}