main()
{
      char a[1000];
      scanf("%s",a);
      char n;
      int i,m,j;
      m=1;
      for(i=1;i<1000;i++)
      {                  
                         if(a[i-1]=='\0')break;
                         if(a[i]==a[i-1])
                         m++;
                         else if(a[i]==a[i-1]+('A'-'a'))
                         m++;
                         else if(a[i]==a[i-1]-('A'-'a'))
                         m++;
                         else
                         {   
                             if('A'<=a[i-1] &&a[i-1]<='Z')
                             printf("(%c,%d)",a[i-1],m);
                             else
                             {printf("(%c,%d)",a[i-1]+'A'-'a',m);}
                             m=1;
                         }
      }

}