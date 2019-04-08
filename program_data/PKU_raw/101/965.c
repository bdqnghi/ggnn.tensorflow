//
//  main.cpp
//  poj
//
//  Created by ChuPan,Wong on 9/27/13.
//  Copyright (c) 2013 ChuPan,Wong. All rights reserved.
//


int main(int argc, const char * argv[])
{
    int A,B,C;
    int a,b,c;
    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            for(int k=1;k<4;k++){
                A = i; B = j; C = k;
                a = (int)(B>A) + (int)(A==C);
                b = (int)(A>B) + (int)(A>C);
                c = (int)(C>B) + (int)(B>A);
                if(!((A>=B&&a>b)||(A>=C&&a>c)||(B>=A&&b>a)||(B>=C&&b>c)
                   ||(C>=A&&c>a)||(C>=B&&c>b))){
                    if(A>=B&&B>=C)
                        cout<<"ABC"<<endl;
                    else if(A>=C&&C>=B)
                        cout<<"ACB"<<endl;
                    else if(B>=A&&A>=C)
                        cout<<"BAC"<<endl;
                    else if(B>=C&&C>=A)
                        cout<<"BCA"<<endl;
                    else if(C>=A&&A>=B)
                        cout<<"CAB"<<endl;
                    else
                        cout<<"CBA"<<endl;
                    return 0;
                }
                    
            }
        }
    }
    
}
