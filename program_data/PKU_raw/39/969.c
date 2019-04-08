struct student{
       char name[21];
       int qimo;
       int maji;
       char ganbu;
       char xibu;
       int lun;
       int money;}st[101];
int main()
{
    int n,i,j,ans=0;
    memset(st,0,sizeof(struct student));
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%s %d %d %c %c %d",st[i].name,&st[i].qimo,&st[i].maji,&st[i].ganbu,&st[i].xibu,&st[i].lun);
    for(i=1;i<=n;i++)
    {if(st[i].qimo>80&&st[i].lun>=1)st[i].money+=8000;
     if(st[i].qimo>85&&st[i].maji>80)st[i].money+=4000;
     if(st[i].qimo>90)st[i].money+=2000;
     if(st[i].qimo>85&&st[i].xibu=='Y')st[i].money+=1000;
     if(st[i].maji>80&&st[i].ganbu=='Y')st[i].money+=850;
     }
     j=1;
     for(i=1;i<=n;i++)
     {if(st[j].money<st[i].money)j=i;
     ans+=st[i].money;
     }
     printf("%s\n%d\n%d",st[j].name,st[j].money,ans);
     return 0;
     }