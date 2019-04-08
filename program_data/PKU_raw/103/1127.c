

main()
{
      char in[1000];
      int i,num=1,a,b;
      scanf("%s",in);
      for(i=0;in[i]!='\0';i++)
      {
           a=in[i];
           b=in[i+1];
           if(a==b || a-b==32 ||a-b==-32) num++;             
           else
           {
               if(in[i]<91) printf("(%c,%d)",in[i],num);
               else printf("(%c,%d)",in[i]-32,num);
               num=1;
           }
      }
   
}
