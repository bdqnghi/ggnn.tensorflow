
int main(int argc, char *argv[])
{
  int j=1,i,m,e=0,a[101],d,f,u,v;
  char s[101];
  gets(s);
 m=strlen(s);
 u=s[0];
 v=s[m-1];
 for(i=0;i<m;i++)
 {
    if(s[i]==v) 
    {
                 a[e]=i;
                 e++;
    }
}



for(i=0;i<e;i++)
{
        for(j=1;j<m;j++)
        { 
        if(a[i]-j>=0)
        
        {
                  f=0;
                  for(d=a[i]-j;d<=a[i];d++)
                  f=f+s[d];   
               if(f==u+v)
               {
               printf("%d %d\n",a[i]-j,a[i]);
               s[a[i]-j]=0;
               s[a[i]]=0;
               }
        }

} 
}                
  	
  return 0;
}
