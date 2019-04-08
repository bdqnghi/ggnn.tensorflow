
int main()
{
int n,i,j,s,t;
s=0;
cin>>n;
int a[19]={7,17,27,37,47,57,67,70,71,72,73,74,75,76,77,78,79,87,97};

for(i=1;i<=n;i++)   
{

if((i%7)!=0)
{                    
for(j=0,t=0;j<=18;j++)  
{if(i==a[j]) t=1;}
}
else t=1;

if(t!=1) s=s+i*i;
}

cout<<s<<endl;
return 0; 
}
