void main()
{
 char text[101],c,d;int i,j,k,a[51],b[51],n,x=0;
 gets(text);c=text[0];n=strlen(text);
 for(i=0;i<n;i++)  if(text[i]!=c)   {d=text[i];break;}
 n=strlen(text);
 for(i=0;i<n;i++)
 {if(text[i]==d)    
 for(j=i-1;j>=0;j--)    
 if(text[j]==c) {a[x]=i;b[x]=j;x++;text[i]='q';text[j]='q';break;}
  }
 for(i=0;i<x;i++)   printf("%d %d\n",b[i],a[i]);
}

