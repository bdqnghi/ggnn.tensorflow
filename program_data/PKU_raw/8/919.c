struct nums
{int m;
 int n;
 int x[2][100];
};
struct nums get()
{int i;
 struct nums in;
 scanf("%d%d",&in.m,&in.n);
 getchar();
 for (i=0;i<in.m;i++)
	 scanf("%d",&in.x[0][i]);
 for (i=0;i<in.n;i++)
	 scanf("%d",&in.x[1][i]);

return in;
}
struct nums bubble(struct nums in)
{int i,j,c;
 for (i=1;i<=in.m;i++)
     for (j=0;j<in.m-1;j++)
		 if (in.x[0][j]>in.x[0][j+1])
		 {c=in.x[0][j];
          in.x[0][j]=in.x[0][j+1];
		  in.x[0][j+1]=c;
		 }
  for (i=1;i<=in.n;i++)
     for (j=0;j<in.n-1;j++)
		 if (in.x[1][j]>in.x[1][j+1])
		 {c=in.x[1][j];
          in.x[1][j]=in.x[1][j+1];
		  in.x[1][j+1]=c;
		 }
return in;     
}
struct nums combine(struct nums in)
{int i;
 for (i=in.m;i<in.m+in.n;i++)
	 in.x[0][i]=in.x[1][i-in.m];
 return in;
}
void put(struct nums in)
{int i;
 printf("%d",in.x[0][0]);
 for (i=1;i<in.m+in.n;i++)
	 printf(" %d",in.x[0][i]);
}
void main()
{struct nums in=get();
 struct nums ina=bubble(in);
 struct nums inb=combine(ina);
 put(inb);
}