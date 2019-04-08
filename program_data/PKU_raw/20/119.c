void main()
{char s[100][15]={'\0'};
 int i,n,l,a,k,t;
 i=0;
 do
 {gets(s[i]);
  i++;
 }while(s[i-1][0]!='\0');
 n=i-2;
 for(i=0;i<=n;i++)
 {l=strlen(s[i]);
  a=s[i][0];
  for(k=1;k<l-4;k++)
  {if(s[i][k]>a)
     {a=s[i][k];
	  t=k;
     }
  }
  for(k=0;k<=t;k++)
  printf("%c",s[i][k]);
  for(k=l-3;k<=l-1;k++)
  printf("%c",s[i][k]);
  for(k=t+1;k<l-4;k++)
  printf("%c",s[i][k]);			
  printf("\n");
 }		
}