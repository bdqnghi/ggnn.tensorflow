int main()
{
       char x[81];
       int lx,n,i,j,flag[100];
       cin>>n;
       getchar();
       for(i=1;i<=n;i++)
       {
              flag[i]=1;
              cin.getline(x,81,'\n');
              for(lx=0;x[lx]!=0;lx++);
              if((x[0]>=65&&x[0]<=90)||(x[0]>=97&&x[0]<=122)||x[0]=='_')
              {
                 //cout<<1;
                 for(j=1;j<=lx-1;j++)
                 {
                                     if(((x[j]<48)||(x[j]>57&&x[j]<65)||(x[j]>90&&x[j]<97)||(x[j]>122&&x[j]))&&x[j]!='_')
                                     {
                                        flag[i]=0;break;
                                     }
                 }
                 
              }
              else flag[i]=0;
              
       }
       for(i=1;i<=n;i++)
       {
                        cout<<flag[i]<<endl;
       }
      
       return 0;
}
