/*
 * 2.cpp
 *
 *  Created on: 2011-11-6
 *      Author: b
 */

int main()
{
    int a,b,c,d,e,f,g;//????
    cin>>a;//????
    b=(int)(a/100);//100?
    c=(int)((a-100*b)/50);//50
    d=(int)((a-100*b-50*c)/20);//20
    e=(int)((a-100*b-50*c-20*d)/10);//10
    f=(int)((a-100*b-50*c-20*d-10*e)/5);//5
    g=(int)((a-100*b-50*c-20*d-10*e-5*f)/1);//1
    cout<<b<<endl;//????
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    cout<<f<<endl;
    cout<<g<<endl;
	return 0;
}
