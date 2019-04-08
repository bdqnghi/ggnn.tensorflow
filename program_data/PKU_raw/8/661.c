int la,lb,a[1000],b[1000],c[2000];
void duqu()
{
     cin>>la>>lb;
     for(int i=0;i<la;i++) cin>>a[i];
     for(int j=0;j<lb;j++) cin>>b[j];
}            //?????? 
void paixu()
{
     int i,j,temp;
     for(i=0;i<la-1;i++)
        for(j=i+1;j<la;j++)
           if (a[i]>a[j])
           {
                         temp=a[i];
                         a[i]=a[j];
                         a[j]=temp;
           }
     for(i=0;i<lb-1;i++)
        for(j=i+1;j<lb;j++)
           if (b[i]>b[j])
           {
                         temp=b[i];
                         b[i]=b[j];
                         b[j]=temp;
           }
}              //??????????? 
void hebing()
{
     for (int i=0;i<la;i++) c[i]=a[i];
     for (int j=0;j<lb;j++) c[la+j]=b[j];
}               //????????????c? 
void shuchu()
{
     for (int i=0;i<la+lb;i++)
     {
         cout<<c[i];
         if (i!=la+lb-1) cout<<' ';
     }
}       //??c 
int main()
{
    duqu();
    paixu();
    hebing();
    shuchu();        //?????? 
    return 0; 
}