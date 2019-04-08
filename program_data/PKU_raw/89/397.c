int main()
{
    int Ren1,Ren2;
    int i,j,n;
    int value[MAX]={0};
    cin>>n;
    while(1)
    {
        cin>>Ren1>>Ren2;            
            if(!(Ren1==0 && Ren2==0))
            {
              value[Ren1]--;           
              value[Ren2]++;         
            }
           else
           break; 
    }
 
   for(i=0;i<=n-1;i++)
     if(value[i]==n-1)
      { cout<<i;  goto line;}
     cout<<"NOT FOUND"; 
line:
    
 return 0;   
}