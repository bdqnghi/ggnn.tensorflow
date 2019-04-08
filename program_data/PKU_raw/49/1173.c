int main()
{
int i,n,m,x,y,z;
char a[500];
gets(a);
for(i=0;a[i]!='\0';i++);
n=i;
for(x=2;x<=n;x++)
  for(i=0;i<n-x+1;i++)
    {for(y=0,m=1;y<x;y++)
        if(a[i+y]!=a[i+x-y-1])
        {m=0;break;}
     if(m==1)
         {for(z=i;z<i+x;z++)
            putchar(a[z]);
          printf("\n");}
     }
return 0;
}
