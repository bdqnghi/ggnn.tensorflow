int main()
{int n,xf[MAX],df[MAX],i,a;
double jd[MAX],b,GPA;
scanf("%d",&n);
    for(i=0;i<n;i++)
	{scanf("%d",&xf[i]);}
    for(i=0;i<n;i++)
	{scanf("%d",&df[i]);
	}
for(i=0;i<n;i++)
	{if(df[i]>=90&&df[i]<=100) jd[i]=4.0;
     if(df[i]>=85&&df[i]<=89) jd[i]=3.7;
	 if(df[i]>=82&&df[i]<=84) jd[i]=3.3;
     if(df[i]>=78&&df[i]<=81) jd[i]=3.0;
	 if(df[i]>=75&&df[i]<=77) jd[i]=2.7;
	 if(df[i]>=72&&df[i]<=74) jd[i]=2.3;
     if(df[i]>=68&&df[i]<=71) jd[i]=2.0;
	 if(df[i]>=64&&df[i]<=67) jd[i]=1.5;
     if(df[i]>=60&&df[i]<=63) jd[i]=1.0;
	 if(df[i]>=0&&df[i]<60)	jd[i]=0.0;
	}
a=0;
             for(i=0;i<n;i++)
			 {a=a+xf[i];
			 }
b=0.0;
                for(i=0;i<n;i++)
				{b=b+1.0*xf[i]*jd[i];
				}
GPA=b/a;
printf("%.2f",GPA);
return 0;
}