int main()
{
    int huiwen[]={11,101,131,151,181,191,313,353,373,383,727,757,787,797,919,929,10301,10501,10601,11311,11411,12421,12721,12821,13331,13831,13931,14341,14741};
    int m,n,i,count=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<29;i++)
    {
    if(huiwen[i]>=m&&huiwen[i]<=n)
     {count=i;break;}}
     for(i=1;i<29;i++)
     {if(count==0)
     {printf("no");break;}
     if(huiwen[i]>=m&&huiwen[i]<=n&&i!=count)
     printf(",%d",huiwen[i]);
     if(huiwen[i]>=m&&huiwen[i]<=n&&i==count)
     printf("%d",huiwen[i]);}
     getchar();
     getchar();
     }
