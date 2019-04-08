void oppoorder(int x);
int main()
{
    int i,j;
    for(i=1;i<=6;i++)
      {cin>>j;
       if(j==0) cout<<'0'<<endl;
       if(j>0) oppoorder(j);
       if(j<0) {j=-j;
                cout<<"-";
                oppoorder(j);
               }}//???????????? 
     return 0; 
}
void oppoorder(int x)
{
     int a[32],i=0,k,flag=0;
     while(x!=0)
     {a[i]=x%10;
      i++;
      x=x/10;}
     for(k=0;k<=i-1;k++)
       {if((a[k]==0)&&(flag==0))
          continue;//??????0???? 
          if(a[k]!=0) flag=1;
          cout<<a[k];//?????0????? 
       }
       cout<<endl;
}  