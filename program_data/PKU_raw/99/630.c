/*****************?????***************
?????
*****************************************/
int main ()
{
    int n;
    cin>>n;//?????
    int age;//?????? 
    int a[5];//??????
    a[1]=a[2]=a[3]=a[4]=0;
    for (int i=0;i<n;i++)
    {
        cin>>age; 
        if ( age<=18) a[1]++;
        else 
             if (age <=35) a[2]++;
             else 
                  if (age<=60) a[3]++;
                  else
                      a[4]++;
        //cout<<a[1]<<a[2]<<a[3]<<a[4]<<endl;???? 
    }
    double  per[5];
    for (int i=1;i<5;i++)
    {
        per[i]=(double)a[i]/n*100;
    }
    cout<<"1-18: ";
    printf("%.2f",per[1]);
    cout<<"%"<<endl; 
    cout<<"19-35: ";
    printf("%.2f",per[2]);
    cout<<"%"<<endl; 
    cout<<"36-60: ";
    printf("%.2f",per[3]);
    cout<<"%"<<endl; 
    cout<<"60??: ";
    printf("%.2f",per[4]);
    cout<<"%"<<endl;
    return 0;
} 
