int main()
{
    char a[100];
    cin.getline(a,100);
    int b[100];//???? 
    int count=0;//???? 
    int i,j;//?? 
    int l=strlen(a);//?? 
    for(i=0;i<l;i++)
    {
                    if(a[i]==' ')
                    {
                               count++;
                               b[count]=i;
                    }//?????? 
    }
    count++;
    b[count]=l;//????????????? 
    for(i=count;i>=2;i--)
    {
                         for(j=b[i-1]+1;j<b[i];j++)
                         {
                                                   cout<<a[j];
                         }
                         cout<<" ";
    }
    for(j=0;j<b[1];j++)
    {
                       cout<<a[j];
    }//?? 
    return 0;
}
