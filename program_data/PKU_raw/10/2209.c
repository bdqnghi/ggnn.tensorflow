int rec[30],height[30];
int maxV;
int main()
{
 int n;
 maxV=0;
 cin>>n;
 if(n==0)
 {
     cout<<0<<endl;
     return 0;
 }
 int i,j;
 for(i=0;i<n;i++)
 {
     cin>>height[i];
     rec[i]=1;
     for(j=0;j<i;j++)
            if(height[j]>=height[i]&&rec[j]+1>rec[i])
                rec[i]=rec[j]+1;
        if(rec[i]>maxV)maxV=rec[i];
 }
 cout<<maxV<<endl;
 return 0;
}