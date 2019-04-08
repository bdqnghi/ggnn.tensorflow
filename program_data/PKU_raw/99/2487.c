                      
int main()
{
    int n,time=0,age;
    double a=0,b=0,c=0,d=0,s;
    
    cin>>n;
    
    while(time<n)
    {
                 cin>>age;
                 if(age<=18)
                 a=a+1;
                 else if(age<=35)
                 b=b+1;
                 else if(age<=60)
                 c=c+1;
                 else
                 d=d+1;
                 
                 time++;
    }
    
    s=a+b+c+d;
    cout<<setprecision(2)<<fixed<<"1-18: "<<100*a/s<<"%"<<endl;
    cout<<"19-35: "<<100*b/s<<"%"<<endl;
    cout<<"36-60: "<<100*c/s<<"%"<<endl;
    cout<<"60??: "<<100*d/s<<"%"<<endl;
    

    
    return 0;
}
