
int shuru[1000000];
int xiaoshuchangdu[10],changdu[10],zhengshuchangdu[10];
int fuzhu;       //????????????
int wuaoshu; 
int a[10][1000000];
int n=0;

void clear (int k)
{
     for (int i=0;i<=999999;i++)
     a[k][i]=0;
     xiaoshuchangdu[k]=0;
     changdu[k]=1;
     zhengshuchangdu[k]=1;
}

void xieru (int k)
{
    fuzhu=0;
    for (int i=1;;i++)
    {
        shuru[i]=getchar ();
        if (shuru [i]==10)
        {
           changdu[k]=i-1;
           break;
        }
        if (shuru [i]==46)
        {
           fuzhu=1;
           xiaoshuchangdu[k]--;
           i--;
        }
        a[k][i]=shuru[i]-48;
        if (fuzhu==1)
        xiaoshuchangdu[k]++;
    }
    zhengshuchangdu[k]=changdu[k]-xiaoshuchangdu[k];
}

         
void shuchu (int m)
{
     for (int i=1;i<=zhengshuchangdu[m];i++)
     cout <<a[m][i];
     if (xiaoshuchangdu[m]>0)
     {
        cout <<".";
        for (int i=zhengshuchangdu[m]+1;i<=changdu[m];i++)
        cout <<a[m][i];
     }
}



void jiafa (int k,int l,int m)
{
     clear(m);
     int fzheng=max(zhengshuchangdu[k],zhengshuchangdu[l])+1;
     int fxiao=max(xiaoshuchangdu[k],xiaoshuchangdu[l]);
     for (int i=fxiao+fzheng;i>=1;i--)
     {
         a[m][i]=a[m][i]+(a[k][zhengshuchangdu[k]+i-fzheng]+a[l][zhengshuchangdu[l]+i-fzheng]);
         a[m][i-1]=a[m][i-1]+a[m][i]/10;
         a[m][i]=a[m][i]%10;
     }
     while (1)
     { 
         if (a[m][1]!=0)
         break;
         if (fzheng+fxiao==1)
         break;
         for (int i=0;i<=fxiao+fzheng;i++)
         a[m][i]=a[m][i+1];
         fzheng=fzheng-1;
     }
     for (int i=fzheng+fxiao;i>=1;i--)
     {
         if (a[m][i]!=0)
         break;
         fxiao=fxiao-1;
     }
     zhengshuchangdu[m]=fzheng;
     xiaoshuchangdu[m]=fxiao;
     changdu[m]=fxiao+fzheng;
}

void jiandancheng (int n,int k,int m)
{
     clear(m);
     int fzheng=zhengshuchangdu[k]+1;
     int fxiao=xiaoshuchangdu[k];
     for (int i=fxiao+fzheng;i>=1;i--)
     {
         a[m][i]=a[m][i]+a[k][zhengshuchangdu[k]+i-fzheng]*n;
         a[m][i-1]=a[m][i-1]+a[m][i]/10;
         a[m][i]=a[m][i]%10;
     }
     while (1)
     { 
         if (a[m][1]!=0)
         break;
         if (fzheng+fxiao==1)
         break;
         for (int i=0;i<=fxiao+fzheng;i++)
         a[m][i]=a[m][i+1];
         fzheng=fzheng-1;
     }
     for (int i=fzheng+fxiao;i>=1;i--)
     {
         if (a[m][i]!=0)
         break;
         fxiao=fxiao-1;
     }
     zhengshuchangdu[m]=fzheng;
     xiaoshuchangdu[m]=fxiao;
     changdu[m]=fxiao+fzheng;
}

void chengfa (int k,int l,int m)                                 //????? 8.9????? 
{
     int fxiao;
     int fzheng; 
     clear(m);
     for (int i=1;i<=changdu[l];i++)
     {
         jiandancheng(a[l][i],k,9);
         jiafa(m,9,8);
         if (i==changdu[l])
         {
            jiandancheng(1,8,m);
            break;
         }
         jiandancheng(10,8,m);
     }
     fxiao=xiaoshuchangdu[k]+xiaoshuchangdu[l];
     fzheng=changdu[m]-fxiao;
     while (1)
     { 
         if (a[m][1]!=0)
         break;
         if (fzheng+fxiao==1)
         break;
         for (int i=0;i<=fxiao+fzheng;i++)
         a[m][i]=a[m][i+1];
         fzheng=fzheng-1;
     }
     for (int i=fzheng+fxiao;i>=1;i--)
     {
         if (a[m][i]!=0)
         break;
         fxiao=fxiao-1;
     }
     zhengshuchangdu[m]=fzheng;
     xiaoshuchangdu[m]=fxiao;
     changdu[m]=fxiao+fzheng;
}
 
void chengfang (int k,int n,int m)                         //?????7,6?????
{
     cout <<n<<endl;
     if (wuaoshu==0)
     {
        clear(6);
        a[6][1]=1;
        wuaoshu=1;
     } 
     clear(7);
     jiandancheng(1,k,7);
     jiandancheng(1,k,m);
     if (n%2==0)
     {
        n=n/2;
        chengfa(m,7,k);
        chengfang (k,n,m);
     }
     else 
     {
          if (n%2==1&&n!=1)
          {
             n=n-1;
             chengfa(6,k,7);
             jiandancheng(1,7,6);
             chengfang(k,n,m);
          }
          else 
          {
               chengfa(6,m,7);
               jiandancheng(1,7,m);
          }
     }
}

int main ()
{
    xieru(1);
    xieru(2);
    jiafa(1,2,3);
    shuchu(3);
    return 0;
}
