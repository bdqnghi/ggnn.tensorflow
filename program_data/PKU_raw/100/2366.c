
struct 
{ char na;
  int num;
} ch[52];


void main ()
{  int n,i,j,k,leap=0;
  char s[300];
  for(i=0;i<26;i++)
  { ch[i].na='A'+i;
    ch[i].num=0;
  }
   for(i=26;i<52;i++)
  { ch[i].na='a'+i-26;
    ch[i].num=0;
  }
  gets(s);
  n=strlen(s); 
 for(i=0;i<n;i++)
  {  if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z')
  {  leap=1;
	  for(j=0;j<52;j++)
	  { if(s[i]==ch[j].na)
	  {  ch[j].num++;
	  }
	  }
  }
  }
  if(leap==0)
	  printf("No");
  else 
  { for(i=0;i<52;i++)
  {
	  if(ch[i].num>0)
	  printf("%c=%d\n",ch[i].na,ch[i].num);
  }
  }


}