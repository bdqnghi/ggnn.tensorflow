void main()
{char a[50],b[50];
int i,j,k,m,n;
scanf("%s %s",a,b);
m=strlen(a);
n=strlen(b);
j=0;
i=0;
do{if(a[i]!=b[j])
   {j++;i=0;}
if(a[i]==b[j])
    {j++;i++;}
  }
while(i< m&&j<n);

k=j-m;
printf("%d",k);
}
