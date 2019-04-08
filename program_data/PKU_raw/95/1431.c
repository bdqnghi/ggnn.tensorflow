int main()
{
    char a[80],b[80];
    cin.getline(a,80);
    cin.getline(b,80);
    int flag=1;
    for(int i=0;a[i]!='\0';i++)
    {
            int c,d;
            c=a[i],d=b[i];
            if((c>=97) &&(c<=122))
            c=c-32;
            if((d>=97) &&(d<=122))
            d=d-32;
            if(c<d)
            {
                   flag=0;
                   cout<<"<";
                   break;
            }
            else if(c>d)
            {
                   flag=0;
                   cout<<">";
                   break;
            }
    }
    if(flag==1)
    cout<<"=";
    return 0;
}