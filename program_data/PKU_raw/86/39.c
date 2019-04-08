int main()
{int n,i,p,z,m,sum=0,lum=0,kum=0;
int duan[1000]={0};
int cishu[50][100];
	scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&duan[i]);
	for(p=0;p<duan[i];p++)                                       
	{scanf("%d",&cishu[i][p]);}
}
for(z=0;z<n;z++)
{   if (duan[z]==0)
	{printf("60\n");}
else {
	for(m=1;m<=duan[z];m++)
		{if ((m*3+cishu[z][m-1])<=60)
			{if (m==duan[z])
				{lum=60-3*m;
				printf("%d\n",lum);}
				else continue;
			}
		if (((m*3+cishu[z][m-1])>60)&&((m*3-3+cishu[z][m-1])<=60))
			{printf("%d\n",cishu[z][m-1]);}
		if (((m*3+cishu[z][m-1])>60)&&((m*3-3+cishu[z][m-1])>60))
			{kum=60-m*3+3;
			printf("%d\n",kum);break;} 
		}
	}

}
return 0;
}		