int main()
{
    int w,a[12]={31,28,31,30,31,30,31,31,30,31,30,31},i,b[13],c[13];
    cin>>w;
     b[0]=12;
    for(i=1;i<13;i++)
    {b[i]=b[i-1]+a[i-1];
    c[i-1]=b[i-1]%7;
    if((c[i-1]+w)%7==5)
		cout<<i<<endl;
	}
     return 0;
}   
    

