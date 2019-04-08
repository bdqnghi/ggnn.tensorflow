int main()
{
  int s[1000][100];
  int i=0,j=0,h=0,a,m=0,sum=0;
  scanf("%d",&a);
  while(a!=-1)
 { 
if(a!=0)
    s[i][j++]=a;
    else
    { s[i][j]=a;
     i++;
j=0;}
    scanf("%d",&a);
}

for(h=0;h<i;h++)
{ while (s[h][j]!=0)
   {  m=0;
      while(s[h][m]!=0)
     {  
        if(((float)s[h][j]/2)==(float)s[h][m]) 
        sum++;
        m++;
     }
    j++;
   }
 printf("%d\n",sum);  
 sum=0;
 j=0;
}
  
 return 0;
}
