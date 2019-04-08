int rr(int year){
  if((year%4==0&&year%100!= 0)||(year%400==0))
          return 1;
          else return 0;
          }    
int main(){
    int y1,m1,d1,y2,m2,d2,p=0,x=0,y=0,a=0,b=0,i;
    int aa[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    cin>>y1>>m1>>d1>>y2>>m2>>d2;
    for(i=y1+1;i<y2;i++)
      p=p+365+rr(i);
    for(x=1;x<m1;x++)
     {  if(x==2)
       a=a+aa[x]+rr(y1);
       else a=a+aa[x];
       }
      a=a+d1;
    for(x=1;x<m2;x++)
     {  if(x==2)
       b=b+aa[x]+rr(y2);
       else b=b+aa[x];
       }
      b=b+d2;
      cout<<(365+rr(y1))*(y1!=y2)+p+b-a;
         return 0;
      }       
      
