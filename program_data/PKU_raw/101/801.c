int main()
{int a,b,c;
 for(a=0;a<3;a++) 
  for(b=0;b<3;b++)
   for(c=0;c<3;c++) //a,b,c???????0,1,2 
    if((a==2-(b>a)-(a==c))&&(b==2-(a>b)-(a>c))&&(c==2-(c>b)-(b>a))) //??????????
                                                     //????2??????? 
       if(a>b&&b>c) cout<<"CBA";
       else if(a>c&&c>b) cout<<"BCA";
       else if(b>c&&c>a) cout<<"ACB";
       else if(b>a&&a>c) cout<<"CAB";
       else if(c>a&&a>b) cout<<"BAC";
       else if(c>b&&b>a) cout<<"ABC";  //?????????? 
 return 0;
}
