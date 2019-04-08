//By Dr.Z


int solve(float a,float b,float c);     //????

int main()
{

cout<<fixed<<setprecision(5);

int n,i,j;   //????
cin>>n;     //?????n

float S[n][3];     //????????

for(i=0;i<=(n-1);i++)                        //??????
{
for(j=0;j<=2;j++) cin>>S[i][j];
}

for(i=0;i<=(n-1);i++)
{
solve(S[i][0],S[i][1],S[i][2]);
}
return 0;
}

int solve(float a,float b,float c)
{
float d=(b*b-4*a*c);    //?????delta
float x,y;        //??????

if(d>0)          //?????
{
d=sqrt(d);
x=-b/a/2;
y=d/a/2;
cout<<"x1="<<(x+y)<<";x2="<<(x-y)<<endl;
}
else if(d==0)   //????? 
{
cout<<"x1=x2="<<(-b/a/2)<<endl;
}
else           //????? 
{
d=sqrt(-d);
x=-b/a/2;
if(x==0) x=abs(x);
y=abs(d/a/2);
cout<<"x1="<<x<<"+"<<y<<"i;x2="<<x<<"-"<<y<<"i"<<endl;
}

return 0;
}
