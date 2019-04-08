main()
{
      char a[300],b[300],c[300],d[300],f[300],h[300];int i,m,n=0,t,g,e[3];
     scanf("%s",a);
       scanf("%s",b);
     scanf("%s",c);
      for(m=0;m<290;m++)
      {if(a[m]=='\0')break;e[0]=m+1;}
      for(m=0;m<290;m++)
      {if(b[m]=='\0')break;e[1]=m+1;}
      for(m=0;m<290;m++)
      {if(c[m]=='\0')break;e[2]=m+1;}
      for(i=0;i<=e[0]-e[1];i++)
      {for(t=0;t<e[1];t++)
         {if(a[i+t]==b[t])n++;else n=0;}
      if(n==e[1]){g=i;break;}
      }
      if(n==0)printf("%s",a);
      else
      {for(i=0;i<g;i++)
      {d[i]=a[i];printf("%c",d[i]);}
     for(i=0;i<e[2];i++)
      {printf("%c",c[i]);}
      for(i=0;i<e[1];i++)
      f[i]=a[i+g];
      for(i=0;i<e[0]-e[1]-g;i++)
      {h[i]=a[g+e[1]+i];printf("%c",h[i]);}}
      
      getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();
}