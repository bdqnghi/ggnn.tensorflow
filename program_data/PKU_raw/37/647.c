int main()
{
 int t,i,j,k,c = 0,m,p,q;
 cin >> t;
 char a[100001];
 for(k=0;k <= t;k++)
 {for(i=0;i<=100000;i++)
  {a[i]=cin.get();
   if(a[i]=='\0'||a[i]=='\n')
   {m=i-1;
    break;}
   }
  for(i=0;i<=m;i++)
  {p=0;
   for(j=0;j<=m;j++)
   {if(a[j]==a[i])
    {p=p+1;}
   }
   if(p==1)
   {cout<<a[i]<<endl;
    c=c+1;
    break;}
   if(i==m&&p!=1)
   {cout<<"no"<<endl;
    c=c+1;
    break;}
    c=c+1;
   }
  }
return 0;
}