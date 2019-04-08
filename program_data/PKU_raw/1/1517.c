int l=0,num=0,o;
void f(int i,int in)
{
     int j;
     for(j=i;j<(in+1);j++)
     {
          if(j*(in/j)==in)
          {
              // out[l]=j;
              // l=l+1;
               o=in/j;
               /*cout<<j<<endl;
               cout<<"----------------------"<<endl;*/
               f(j,in/j);
               o=o*j;
          }
          //else f(j+1,in); 
                   
     }
          if(o==1) {num=num+1;/*cout<<"**************************"<<endl;*/}
}
int main()
{
     int t;
     cin>>t;
     int i;
     int in;
     for(i=0;i<t;i++)
     {
          cin>>in;
          f(2,in);
          cout<<num<<endl;
          num=0;
     } 
     return 0;
}

