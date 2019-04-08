char in[100000];
int main()
{
     
      int t,k,i,j,m,num[26];
	  
      scanf("%d",&t);
      for(k=1;k<=t;k++)
	  {
           m=0;
           for (i=0;i<=25;i++) num[i]=0;
           scanf("%s",in);
           for(i=0;in[i]!='\0';i++)
           {
                j=in[i]-97;
                num[j]++;                   
           }
		   for(i=0;in[i]!='\0';i++)
		   {
			   if(num[in[i]-97]==1)
			   {printf("%c\n",in[i]);m=1;break;}
		   }
           if (m==0)printf("no\n");
           
      } 

}