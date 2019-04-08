main()
{
     char a[1001],b[1001];
     scanf("%s %s",a,b);
     int x1[26]={0};
     int x2[26]={0};
     int s1[26]={0};
     int s2[26]={0};
     int a1,b1;
     a1=strlen(a);
     b1=strlen(b);
     if(a1!=b1)
     printf("NO");
     else
     {for(int i=0;i<a1;i++)
     {
             if(a[i]<='z'&&a[i]>='a')
             x1[a[i]-'a']++;
             if(a[i]<='Z'&&a[i]>='A')
             x2[a[i]-'A']++;
             if(b[i]<='z'&&b[i]>='a')
             s1[b[i]-'a']++;
             if(b[i]<='Z'&&b[i]>='A')
             s2[b[i]-'A']++;
     }
     int count=0;
     for(int i=0;i<26;i++)
     {
             if(s1[i]!=x1[i])
             {
                             count++;
                             break;
             }
             if(s2[i]!=x2[i])
             {
                             count++;
                             break;
             }
     }
     if(count==0)
     printf("YES");
     else
     printf("NO");
     }
}
     
           