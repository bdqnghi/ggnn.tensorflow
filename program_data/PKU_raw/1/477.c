int f(int a,int min)
{ 
    int i,result; 
    if(a<min) 
        return 0; 
    result=1; 
    for(i=min;i<a;i++) 
        if(a%i==0) 
            result+=f(a/i,i);
    return result; 
} 
int main() 
{ 
    int i,n,num[100]; 
    cin>>n; 
    for(i=0;i<n;i++) 
    { 
        cin>>num[i]; 
        cout<<f(num[i],2)<<endl; 
    } 
    return 0; 
} 
