int main()
{
 int a,b;
 char n[40];
 scanf("%d %s %d",&a,n,&b);
         int l=strlen(n);
         int m[40];
         int x=0;
           
             for(int i=0;i<l;i++)
                             {
                             if(n[i]>='A'&&n[i]<='Z')
                             n[i]=n[i]-'A'+'a';
                             if(n[i]<='z'&&n[i]>='a')
                             m[i]=n[i]-'a'+10;
                             else m[i]=n[i]-'0';
                             int d=m[i];
                             x=x*a+d;
                             }
           if (x==0)
           printf("0");
           else
           { 
         int e[40],k;
         for (k=0;x!=0;k++)
             {e[k]=x%b;
             x=x/b;
                   
             }                
             e[k]='\0';
         char f[40];
         int j;
                   for(j=0;j<k;j++)
         {
                  if(e[j]>=0&&e[j]<10)
                  f[k-j-1]=e[j]+'0';
                  else
                  f[k-j-1]=e[j]-10+'A';
         }
         f[k]='\0';
 printf("%s",f);
}
 getchar();
 getchar();

}
