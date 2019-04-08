int main()
{int x[4];
char x1[4]={'z','q','s','l'};
int i,j;
for(x[0]=10;x[0]<=50;x[0]=x[0]+10)
{for(x[1]=10;x[1]<=50;x[1]=x[1]+10)
{if(x[1]==x[0])
continue;
for(x[2]=10;x[2]<=50;x[2]=x[2]+10)
{if(x[2]==x[0]||x[2]==x[1])
continue;
                      for(x[3]=10;x[3]<=50;x[3]=x[3]+10)
{if(x[3]==x[0]||x[3]==x[1]||x[3]==x[2])
continue;
if((x[0]+x[1])==(x[2]+x[3])&&(x[0]+x[3])>(x[2]+x[1])&&(x[0]+x[2])<x[1])
{for(i=10;i<=50;i=i+10)
{for(j=0;j<4;j++)
{if(x[j]==60-i)
{cout<<x1[j]<<" "<<60-i<<endl;}}
                       }
                            }
                      }


}}}
return 0;
    }