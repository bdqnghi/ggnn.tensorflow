

main()
{
int i,len,k=0;
char a[1000];
char p[1000];
int b[1000]={1};

scanf("%s",a);
len=strlen(a);
for(i=0;i<=len-1;i++)
{
              if(a[i]=='a'||a[i]=='A')
              a[i]='A';
              if(a[i]=='b'||a[i]=='B')
              a[i]='B';
              if(a[i]=='C'||a[i]=='c')
              a[i]='C';
              if(a[i]=='d'||a[i]=='D')
              a[i]='D';
//printf("%c",a[i]);
}

for(i=0;i<=len-1;i++)
{
     if(a[i+1]==a[i])
                     {
                     b[k]=b[k]+1;
                     }
     else
     {
     p[k]=a[i];
     printf("(%c,%d)",p[k],b[k]);
     k=k+1;
     b[k]=1;
     }
}

}             