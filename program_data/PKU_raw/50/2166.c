
int main()
{
    int m[12];
    m[0]=0;
    for(int i=1;i<12;i++)
    {
            if(i==2) m[i]=m[i-1]+28;
            else if(i<8&&i%2==1) m[i]=m[i-1]+31;
            else if(i>=8&&i%2==0) m[i]=m[i-1]+31;
            else m[i]=m[i-1]+30;
    }
    int w;
    cin>>w;
    for(int q=1;q<=12;q++)
      if((m[q-1]+13+w-1)%7==5) cout<<q<<endl;
}