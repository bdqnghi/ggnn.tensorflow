
void f(int x,int y,int a[][100])
{
   int i,j; 
   if(x*y==0||x<0||y<0)                               //??????? 
     return;
   if(x==1||y==1)
   {
     for(i=0;i<x;i++)
       for(j=0;j<y;j++)
       { 
         cout<<a[i][j]<<endl;
       }
   return; 
   } 
   int b[100][100]; 
   for(j=0;j<y;j++)                      //???? 
     cout<<a[0][j]<<endl;
   for(i=1;i<x;i++)
     cout<<a[i][y-1]<<endl;
   for(j=y-2;j>=0;j--)
     cout<<a[x-1][j]<<endl;
   for(i=x-2;i>0;i--)
     cout<<a[i][0]<<endl;
   for(i=1;i<x-1;i++) 
     for(j=1;j<y-1;j++)
       {
         b[i-1][j-1]=a[i][j];             
       }

   f(x-2,y-2,b);                        //???????? 
   return; 
} 

int main()
{
int x,y,a[100][100],i,j;
cin>>x>>y;                                 //???? 
for(i=0;i<x;i++)
  for(j=0;j<y;j++) 
    cin>>a[i][j];
if(x==1||y==1)
  for(i=0;i<x;i++)
    for(j=0;j<y;j++) 
      cout<<a[i][j]<<endl;
else 
   f(x,y,a); 
return 0; 
}
