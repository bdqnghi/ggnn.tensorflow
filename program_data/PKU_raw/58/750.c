int main()
{int n;
cin>>n;
int t[100]; 
cin.get();
char a[100][80];
int i,j;
for(i=0;i<100;i++)
for(j=0;j<80;j++)
a[i][j]='\0';
for(i=0;i<n;i++)
cin.getline(a[i],81);

for(i=0;i<n;i++)
{if(!(a[i][0]>=65&&a[i][0]<=90||a[i][0]==95||a[i][0]>=97&&a[i][0]<=122))
{t[i]=0;
continue;}
                  for(j=0;j<80;j++)
{if(!(a[i][j]>=65&&a[i][j]<=90||a[i][j]==95||a[i][j]>=97&&a[i][j]<=122||a[i][j]>=48&&a[i][j]<=57||a[i][j]=='\0'))
{t[i]=0;
break;
}
 }
                 if(j==80)
t[i]=1;
}    
for(i=0;i<n;i++)    
{cout<<t[i]<<endl;
                    }    
     return 0;
    }
