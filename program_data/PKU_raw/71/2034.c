

int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int hash[13][32];

int main()
{
    int Data;scanf("%d\n",&Data);
    while (Data--) {
          int year,m1,m2;
          scanf("%d %d %d\n",&year,&m1,&m2);
          if (year % 4==0 && (year % 100!=0 || year % 400==0)) month[2]=29;
             else month[2]=28;
          int cnt=0;if (m1>m2) swap(m1,m2);
          for (int i=1;i<=12;i++)  
              for (int j=1;j<=month[i];j++)
                  hash[i][j]=++cnt;
          if ((hash[m2][1]-hash[m1][1])%7==0) printf("YES\n");
             else printf("NO\n");
    } 
    return 0;
}

