void main()
{int t,i,j,num[100][26]={0};
 char a[100][10000];
 scanf("%d\n",&t);
 for(i=0;i<t;i++)
 {for(j=0;;j++)
	 {scanf("%c",&a[i][j]);
 if(a[i][j]=='\n')break;}}
 for(i=0;i<t;i++)
 {{for(j=0;;j++)
	     if(a[i][j]!='\n')
		 num[i][a[i][j]-'a']++;
		 else break;}
   for(j=0;;j++)
	   if(a[i][j]!='\n')
	   {if(num[i][a[i][j]-'a']==1){printf("%c\n",a[i][j]);break;}}
	   else break;
	   if(a[i][j]=='\n')printf("no\n");}
}
 



