
int main(int argc, char* argv[])
{ int days[13] = {0, 31, 28, 31, 30, 31, 30,
                    31, 31, 30, 31, 30, 31 };
   int y, m1,m2, d, i,j, n,t;
   scanf("%d",&n);
   for(i=1;i<=n;i++){d=0;days[2]=28;
	   scanf("%d%d%d", &y, &m1, &m2);

       if ((y % 4 == 0 && y % 100 !=0) || (y % 400 == 0))
        days[2]++;
	   if(m1>12||m1<1||m2>12||m2<1)printf("NO");
	   else if(m1>m2){t=m1;m1=m2;m2=t;}
	   for(j=m1;j<m2;j++){
		   d=d+days[j];
	   }
	   if(d%7==0)printf("YES\n");
	   else printf("NO\n");
   }

	
	return 0;
}