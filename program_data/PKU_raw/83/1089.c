//??????
int main()
{int n,a[10],b[10];
float GPA;
double c[10],SUMa,SUMc;
 int i;
  a[0]=0;
  b[0]=0;
  c[0]=0;
  SUMa=0;
  SUMc=0;

    scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);}
      
	for(i=0;i<n;i++)
	 {scanf("%d",&b[i]);
	if (b[i]>=90) c[i]=4*a[i];
	else if ((b[i]<=89)&&(b[i]>=85)) c[i]=3.7*a[i];
	else if ((b[i]<=84)&&(b[i]>=82)) c[i]=3.3*a[i];
	else if ((b[i]<=81)&&(b[i]>=78)) c[i]=3.0*a[i];
	else if ((b[i]<=77)&&(b[i]>=75)) c[i]=2.7*a[i];
	else if ((b[i]<=74)&&(b[i]>=72)) c[i]=2.3*a[i];
	else if ((b[i]<=71)&&(b[i]>=68)) c[i]=2.0*a[i];
	else if ((b[i]<=67)&&(b[i]>=64)) c[i]=1.5*a[i];
    else if ((b[i]<=63)&&(b[i]>=60)) c[i]=1.0*a[i];
	else  c[i]=0*a[i];
	}

    for(i=0;i<n;i++)
	{SUMc=SUMc+(float)c[i];
     SUMa=SUMa+a[i];
	}

	GPA=(float)(SUMc/SUMa);

 printf("%.2f",GPA);
return 0;
}





	

    
    