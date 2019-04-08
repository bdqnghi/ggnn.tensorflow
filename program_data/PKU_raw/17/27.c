int main()
 {
    //    freopen ("1.txt","r",stdin);
  //      freopen ("2.txt","w",stdout);
       int i,len,lnum,num=0,left[102]={-1},fail[102]={0},t=0;
       char s1[102];
       while(scanf("%s",s1)!=EOF)
       {
        printf("%s\n",s1);
        len=strlen(s1);
        lnum=0;
        for(i=0;i<len;i++)
        {
           if(s1[i]=='(')
            {  
               lnum++;
               left[lnum]=i;  
            }
            
           if(s1[i]==')')
            {  
               if(lnum==0)
               fail[i]=2;
               else
               {
                   left[lnum]=-1;
                   lnum--;
               }
            }
        }
        for(i=1;i<=lnum;i++)
        {
           fail[left[i]]=1;
           left[i]=-1;
        }
      //  printf("lnum=%d\n",lnum);
       for(i=0;i<len;i++)
        if(fail[i]>0)
        num++;
           for(i=0;i<len&&num>0;i++)
            {
             if(fail[i]==2)
              {  printf("?"); num--; t=1;}
             if(fail[i]==1)
              {  printf("$"); num--; t=1;}
             if(fail[i]==0&&t==1)
                printf(" ");
                fail[i]=0;
            }
            t=0;
            printf("\n");
        }
       // getch();
       return 0;
        }
