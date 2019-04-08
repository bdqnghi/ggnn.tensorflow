int main()
{int i=0;
int k=0;
    char a[100][100];
while(cin.getline(a[i],101,' '))
{i++;
}
for(k=0;k<100;k++)
{if(a[i-1][k]=='\0')
a[i-1][k-1]='\0';}   
int j=0;
for(j=0;j<i-1;j++)    
{cout<<a[i-j-1]<<' ';
                    }
                    cout<<a[0];    
 return 0;                   
    }