void a(char t[],int k)
{int i,j;
if(t[0]!=0)
{for(i=0;i<k-1;i++)
{if(t[i]==0)
continue;
j=i+1;
while(t[j]==0)
{j++;}
if(t[i]!=t[j])
{cout<<i<<" "<<j<<endl;
t[i]=0;
t[j]=0;
break;}
}
a(t,k);
                }


     }
int main()
{char t[100];
int i,k;
for(i=0;i<100;i++)
t[i]=0; 
cin>>t;
for(i=0;i<100;i++)
{if(t[i]==0)
break;} 
k=i;
a(t,k);

return 0;

    
    }
