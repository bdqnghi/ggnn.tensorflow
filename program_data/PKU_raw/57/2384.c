void main()
{int n,i,num,j,k;
char a[30][30];
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%s",a[i]);
num=strlen(a[i]);
if(a[i][num-1]=='r')
a[i][num-2]='\0';
if(a[i][num-1]=='y')
a[i][num-2]='\0';
if(a[i][num-1]=='g')
a[i][num-3]='\0';
}
for(i=0;i<n;i++)
puts(a[i]);
}