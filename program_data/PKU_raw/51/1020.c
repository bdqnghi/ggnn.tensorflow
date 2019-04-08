int main()
{
    char a[leng1],b[leng1][leng1];
    int count[leng1]={0};
    int leng=0;
    int i,j,k;
    cin>>k;
    cin.get();
    cin.getline(a,leng1,'\n');
    char *p=a;
    while(*p!='\0')
    {leng++;p++;}
    for(i=0;i<=leng-k;i++)
       strncpy(b[i],a+i,k);
    for(i=0;i<=leng-k;i++)
       for(j=i;j<=leng-k;j++)
       if(strcmp(b[i],b[j])==0)
         count[i]++;
    int max=0;
    for(i=0;i<=leng-k;i++)
       if(count[i]>max)max=count[i];
    if(max<=1){cout<<"NO";return 0;}
    cout<<max<<endl;
    for(i=0;i<=leng-k;i++)
       if(count[i]==max)cout<<b[i]<<endl;
    cin.get();
    return 0;
}
