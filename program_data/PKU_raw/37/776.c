int main()
{int n;
int t[100][26];
int s;
cin>>n;
cin.get();
int i;
int j=0;
char a[100][10001];
for(i=0;i<100;i++)
for(j=0;j<26;j++)
{t[i][j]=0;
                    }
for(i=0;i<100;i++)
for(j=0;j<10001;j++)
{a[i][j]='\0';
                    }
for(i=0;i<n;i++)
{cin.getline(a[i],10000);}
for(i=0;i<n;i++)
{j=0;
                while(a[i][j]!='\0')
                {s=a[i][j]-97;
                t[i][s]++;
                j++;              }

                }
for(i=0;i<n;i++)
{for(j=0;j<10001;j++)
{if(a[i][j]=='\0')
{cout<<"no"<<endl;
break;
                  }
else
                    { if(t[i][(int)(a[i][j]-97)]==1)
{cout<<a[i][j]<<endl;
break;
              }        }   
}


}
return 0;
    } 