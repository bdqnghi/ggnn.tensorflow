int judge(int year,int a,int b)
{int day[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
 int d=0,i,flag,max,min;
 if(year%4==0&&year%100!=0||year%400==0) 
   flag=1;
 else flag=0;//????
 if(a==b) return 1;
 else{
  max=(a>b)?a:b;
  min=(a<b)?a:b;
  for(i=min;i<max;i++)
   d+=day[flag][i-1];
  if(d%7==0) return 1;
  else return 0;
 }
}

int main()
{int n,year,a,b,i;
 cin>>n;
 for(i=1;i<=n;i++)
 {cin>>year>>a>>b;
  if(judge(year,a,b)) cout<<"YES"<<endl; else cout<<"NO"<<endl;
 }
 return 0;
}