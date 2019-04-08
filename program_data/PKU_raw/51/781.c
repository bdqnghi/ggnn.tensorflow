int max(int a[])
{
      int i, j, t;
      for(i=0,t=a[0];i<498;i++)
           if(t<a[i])t=a[i];
      return(t);
}
main()
{
      int n, i, j, p, a[498],m;
      for(i=0;i<498;i++) a[i]=1;
      char str1[500], str2[5]={'\0','\0','\0','\0','\0'};
      scanf("%d",&n);
      scanf("%s",str1);
      for(j=0;j<strlen(str1)-n+1;j++)
      {
           for(p=0,i=j;p<n;p++,i++) str2[p]=str1[i];
           for(i=j+1;i<strlen(str1);i++)
           {
                if(str1[i]==str2[0]) 
                 {
                       int k=1;
                       for(m=i+1,p=1;m<strlen(str1) && p<strlen(str2);m++, p++)
                       {
                             if(str1[m]==str2[p]) k++;
                             else break;
                       }
                       if(k==strlen(str2)) a[j]++;
                 }
           }
           
      }
      if(max(a)==1) printf("NO");
      else
      {
           printf("%d\n",max(a));
      for(i=0;i<strlen(str1)-n+1;i++)
      {
           if(a[i]==max(a))
           {
                 for(p=0,j=i;p<n;p++,j++) str2[p]=str1[j];
                 printf("%s\n",str2);
           }
      }
      }
      
}
