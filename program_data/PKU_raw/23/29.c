main()
{char c[50][100];
int d[100],i,j,a=0;
 for(i=0;i<50;i++)
 { d[i]=0;
 for(j=0;j<100;j++)
	{c[i][j]=getchar();
	if(c[i][j]>122||c[i][j]<50) break;
    d[i]+=1;}
    if(c[i][j]=='\n') break;
    a+=1;
 }
 for(j=0;j<d[a];j++) putchar(c[a][j]);
 for(i=a-1;i>=0;i--)
 {printf(" ");
 for(j=0;j<d[i];j++)
		putchar(c[i][j]);
 }
}