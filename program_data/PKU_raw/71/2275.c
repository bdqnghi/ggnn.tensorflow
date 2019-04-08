int main()
{
	int n,y,m1,m2,i,j,t,s1,s2;
	int a[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int b[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>n;
	for(i=1;i<=n;i++)
	{cin>>y>>m1>>m2;
     if(m1<m2)
	 { if(y%4!=0||(y%100==0&&y%400!=0))
		{ for(s1=1,j=0;j<=m1-1;j++) s1=s1+b[j];
          for(s2=1,j=0;j<=m2-1;j++) s2=s2+b[j]; 
		}
	   else 
	   { for(s1=1,j=0;j<=m1-1;j++) s1=s1+a[j];
         for(s2=1,j=0;j<=m2-1;j++) s2=s2+a[j];
	   }
	 }
	 else
     { if(y%4!=0||(y%100==0&&y%400!=0))
		{ for(s1=1,j=0;j<=m2-1;j++) s1=s1+b[j];
          for(s2=1,j=0;j<=m1-1;j++) s2=s2+b[j]; 
		}
	   else 
	   { for(s1=1,j=0;j<=m2-1;j++) s1=s1+a[j];
         for(s2=1,j=0;j<=m1-1;j++) s2=s2+a[j];
	   }
	 }
	 if((s2-s1)%7==0) cout<<"YES"<<'\n';
	 else cout<<"NO"<<'\n';
	}
	return 0;
}