
int main()
{int num[100500]={0};
 int n,i,j,k,count=0;
 cin>>n;
 for(i=0;i<n;i++) cin>>num[i];
 cin>>k;
 
 for(i=0;i<n;i++)   //??k???????? 
  while(num[i]==k)
    {count++;
     for(j=i;j<n-1;j++) num[j]=num[j+1];
     num[n-1]=12365;} //???????? 
 for(i=0;i<n-count-1;i++) cout<<num[i]<<" "; //??????? 
 if(n-count-1>=0)cout<<num[n-count-1];
 cout<<endl; 

 return 0;
    } 
