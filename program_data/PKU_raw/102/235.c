
int main()
{
	int n=0,i;
	float nan[40];
	int m,f;
	float nv[40];
	char xingbie[7];
	float shengao;
	scanf("%d",&n);
	m=0;f=0;
	for (i=0;i<=n-1;i++)
	{
		scanf("%s %f",xingbie,&shengao);
		
		if(xingbie[0]=='m')
		{nan[m]=shengao;
		 m++;
		}
		else
		{nv[f]=shengao;
		 f++;
		}
	}
float T;
int j,k;

for(j=0;j<=m-2;j++)
{ for(k=0;k<=m-2-j;k++)
 {
  if(nan[k]>nan[k+1])
   {
	  T=nan[k+1];	  
	  nan[k+1]=nan[k];
	  nan[k]=T;
   }
 }
}
   for(j=0;j<=f-2;j++)
 { for(k=0;k<=f-2-j;k++)
  {
   if(nv[k]<nv[k+1])
   {
	  T=nv[k+1];	  
	  nv[k+1]=nv[k];
	  nv[k]=T;
   }
  }
 }
   for(i=0;i<m;i++)
      printf("%.2f ",nan[i]);
 for(i=0;i<f-1;i++)
    printf("%.2f ",nv[i]);
printf("%.2f",nv[f-1]);
	return 0;
}

