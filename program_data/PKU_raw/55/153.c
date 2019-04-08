long pow(int m,int a)
{
     long p=1;
     for(int i=0;i<m;i++)p*=a;
     return p;
}
     


int main()
{
char s1[200],s2[200];
int a,b;
cin>>a>>s1>>b;
long n=0;
int lt=strlen(s1);
int i,j;
for(i=0;i<lt;i++)
{
                 if(s1[i]>='a' && s1[i]<='z')s1[i]=s1[i]-'a'+10;
                 else if(s1[i]>='A' && s1[i]<='Z')s1[i]=s1[i]-'A'+10;
                 else s1[i]-='0';
}
for(i=0;i<lt;i++)
n+=s1[i]*pow(lt-i-1,a);
j=0;
while(n>0)
{
        s2[j]=n%b;
        n/=b;
        j++;
}

for(i=0;i<j;i++)
{
                if(s2[i]<10)s2[i]+='0';
                else s2[i]+='A'-10;
}
for(i=0;i<j;i++)cout<<s2[j-1-i];
if(!j)cout<<'0';
cout<<endl;

  


          
          return 0;
}  
