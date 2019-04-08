int main()
{
    int n;
    cin>>n;
    double a[n],b[n],c[n];
    cin>>a[0]>>b[0];
    c[0]=b[0]/a[0];
    int i;
    for(i=1;i<n;i++){
    cin>>a[i]>>b[i];
   c[i]=b[i]/a[i];
   if(c[i]-c[0]>0.05) cout<<"better"<<endl;
   if(c[i]-c[0]<-0.05) cout<<"worse"<<endl;
   if(c[i]-c[0]>-0.05&&c[i]-c[0]<0.05) cout<<"same"<<endl;
                     }
   
   
    
}
