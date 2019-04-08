int main()
{ float change(int n);
	int n,i,c1[100],s[100];
float GPA,sum=0,c=0,g[100];
scanf("%d\n",&n);
scanf("%d",&c1[0]);
for(i=1;i<=n-1;i++)
{scanf(" %d",&c1[i]);}
/*scanf("\n");*/
scanf("%d",&s[0]);
for(i=1;i<=n-1;i++)
{scanf(" %d",&s[i]);}
for(i=0;i<=n-1;i++)
{g[i]=change(s[i]);}
for(i=0;i<=n-1;i++)
{sum=sum+g[i]*c1[i];
c=c+c1[i];}
GPA=sum/c;
printf("%.2f",GPA);
return 0;
}



float change(int n)
{ float y;
if(n>=90&&n<=100) y=4.0 ; 
else if(n>=85&&n<=89)  y=3.7 ;
else if(n>=82&&n<=84)  y=3.3 ;
else if(n>=78&&n<=81)  y=3.0 ;
else if(n>=75&&n<=77)  y=2.7 ;
else if(n>=72&&n<=74)  y=2.3 ;
else if(n>=68&&n<=71)  y=2.0 ;
else if(n>=64&&n<=67)  y=1.5 ;
else if(n>=60&&n<=63)  y=1.0 ;
else if(n<60) y=0; 
return (y);
}


