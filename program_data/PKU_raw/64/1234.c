void main()
{int i,j,k=1,n,sa[100][3],b=0;
double s[100]={0},point[10][3],a,c;
 scanf("%d",&n);
 for (i=0;i<n;i++)
 {scanf("%lf%lf%lf", &point[i][0],&point[i][1],&point[i][2]);}
 
 for (i=0;i<n-1;i++)
    {for (j=i+1;j<n;j++,k++)
         {c=(point[i][0]-point[j][0])*(point[i][0]-point[j][0])+(point[i][1]-point[j][1])*(point[i][1]-point[j][1])+(point[i][2]-point[j][2])*(point[i][2]-point[j][2]);
          s[k]=sqrt(c);
          sa[k][1]=i; sa[k][2]=j;
         }
    }
 
  for (i=1;i<k;i++)
     {for (j=k-1;j>1;j--)
	      if (s[j]>s[j-1]+0.000001)
		    {s[j-1]=s[j]+s[j-1];
             s[j]=s[j-1]-s[j];
			 s[j-1]=s[j-1]-s[j];
             b=sa[j][1];
			 sa[j][1]=sa[j-1][1];
			 sa[j-1][1]=b;
			 b=sa[j][2];
			 sa[j][2]=sa[j-1][2];
			 sa[j-1][2]=b;

		    }
      }
 for (i=1;i<k;i++)
     {b=sa[i][1];
	  printf("(%.0lf,%.0lf,%.0lf)-",point[b][0],point[b][1],point[b][2]);
	  b=sa[i][2];
	  printf("(%.0lf,%.0lf,%.0lf)=",point[b][0],point[b][1],point[b][2]);
    printf("%.2lf\n", s[i]);}
 
}