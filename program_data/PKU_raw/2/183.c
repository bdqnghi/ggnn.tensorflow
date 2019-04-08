void main()
{
     struct book
     {
            int num;
            char name[26];
     };
     int m,i,j,max;
     int sum[26]={0};
     scanf("%d",&m);
     struct book b[m];
     for(i=0;i<m;i++)
       scanf("%d %s",&b[i].num,b[i].name);
     for(i=0;i<m;i++)
     {
                     for(j=0;j<strlen(b[i].name);j++)
                         sum[(b[i].name)[j]-'A']++;
     
     }
     max=0;
     for(i=1;i<26;i++)
       if(sum[i]>sum[max])max=i;
     printf("%c\n%d\n",max+'A',sum[max]);
     for(i=0;i<m;i++)
     {
                     for(j=0;j<strlen(b[i].name);j++)
                     {
                        if((b[i].name)[j]==65+max)
                        printf("%d\n",b[i].num);
                        }
     }
 
}
