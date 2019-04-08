
struct A
{
 int x1,y1,z1;
}a[10];
 
double juli(int a,int b,int c,int d,int e,int f)
{
 double m;
 m=(double)(a-d)*(a-d)+(b-e)*(b-e)+(c-f)*(c-f);
 m=sqrt(m);
 return m;
}
int cmp(const void * a, const void * b)
{
     return((*(double*)a-*(double*)b>0)?1:-1);
}
int main()
{
 int n,i,j,k,l=0,flag;
 double b[50];
 while(cin>>n&&n)//??????
 {
  k=0;
  for(i=0;i<n;i++)//???
  {
   cin>>a[i].x1;
   cin>>a[i].y1;
   cin>>a[i].z1;
  }
   for(i=0;i<n;i++)//???
    for(j=i+1;j<n;j++)
     b[k++]=juli(a[i].x1,a[i].y1,a[i].z1,a[j].x1,a[j].y1,a[j].z1);//???b[i]??
    
    qsort(b,n*(n-1)/2,sizeof(b[0]),cmp);//???? 
    l=n*(n-1)/2-1;
    flag=0;
   while(l>=0)
   {
     for(i=0;i<n;i++)
     {
               for(j=i+1;j<n;j++)      
                if( b[l]==juli(a[i].x1,a[i].y1,a[i].z1,a[j].x1,a[j].y1,a[j].z1))
       {
       //    printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",a[i].x1,a[i].y1,a[i].z1,a[j].x1,a[j].y1,a[j].z1,b[l]);
           cout<<"("<<a[i].x1<<","<<a[i].y1<<","<<a[i].z1<<")"<<"-"<<"("<<a[j].x1<<","<<a[j].y1<<","<<a[j].z1<<")"<<"="<<fixed<<setprecision(2)<<b[l]<<endl;
           l--;
           if(b[l]==b[l+1])
            continue;
           else
           {    flag=1;
             break;
         }
       }
       if(flag==1)
       {
        flag=0;
        break;
       }
     }
     
   }

 }
 return 0;

}