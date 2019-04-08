

int search(char a[],char b[],int i,int x)
{
    int q;    
    for(q=0;q<=x-1;q++)
    {if(b[q]==a[i])
    {b[q]='0';
    return(q);}
    }
    return(-1);
}
    
int main(int argc, char *argv[])
{
  
    char a[30],b[30];
    int m,i,j,z,n;
    scanf("%s",a);
    scanf("%s",b);
m=strlen(a);
n=strlen(b);
if(m!=n)
printf("NO\n");
else
    {for(i=0;i<=m-1;i++)
    {z=search(a,b,i,m);
    if(z==-1)
      {printf("NO\n");
       break;}
    }
    if(z!=-1)
    printf("YES\n"); } 
    
  

  return 0;
}

  
  
