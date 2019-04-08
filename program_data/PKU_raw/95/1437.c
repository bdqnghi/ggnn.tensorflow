
char a[80],b[80];
int n,m;
int i,j;

/*

int min(int x,int y)
{
    if(x>y) return y;
    return x;
}

char compare()
{
    int l=min(n,m);
    for(int i=0;i<l;i++)
    {
        if (lower(a[i])<lower(b[i])) return '<'; 
        if (lower(a[i])>lower(b[i])) return '>'; 
    }
    if (n<m) return '<';
    if (n>m) return '>';
    return '=';
}*/

char lower(char x)
{
    if(x>='A' && x<='Z')
        return x+'a'-'A';
    return x;
}

char tochar(int m)
{
   if(m>0)  return '>';
   if(m<0)  return '<';
   return '=';
}

void toLowerArray(char x[],int len)
{
    for(int j=0;j<len;j++)
        x[j]=lower(x[j]);
}
        
int main()
{
    gets(a);
    gets(b);
    n=strlen(a);
    m=strlen(b);
    
    toLowerArray(a,n);
    toLowerArray(b,m);
    
    cout<<tochar(strcmp(a,b));
    //cout<<compare();     
    return 0;
}
