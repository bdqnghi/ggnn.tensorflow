int main()
{ struct student
  { char name[20];
    int jun;
    int ping;
    char gan;
    char xi;
    int lun;
    };
  struct student s[100];
  int n,i,j;
  long t,g[100],m; 
  scanf("%d\n",&n);
  for (i=0;i<=(n-1);i++)
    { scanf("%s",&s[i].name);    
      scanf("%d%d %c %c%d",&s[i].jun,&s[i].ping,&s[i].gan,&s[i].xi,&s[i].lun);
     }
  for  (i=0;i<=(n-1);i++)
   {  g[i]=0;
     if (s[i].jun>80&&s[i].lun>=1) g[i]=g[i]+8000;
     if (s[i].jun>85&&s[i].ping>80) g[i]=g[i]+4000;
     if (s[i].jun>90) g[i]=g[i]+2000;
     if (s[i].xi=='Y'&&s[i].jun>85) g[i]=g[i]+1000;
     if (s[i].gan=='Y'&&s[i].ping>80) g[i]=g[i]+850;
   }
  m=g[0];j=0;t=0;
  for (i=0;i<=(n-1);i++)
   { t=t+g[i];
     if (m<g[i]) {m=g[i];j=i;}
    }
  printf("%s\n%d\n%ld",s[j].name,m,t);
}