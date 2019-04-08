
int sq(int a,int b)
{ int r;
  r=(a-b)*(a-b);
  return(r);
}

float dis(int a[3],int b[3])
{ int  i;
  float s=0;
  for(i=0;i<3;i++)
    s+=sq(a[i],b[i]);
  s=sqrt(s);
  return(s);

}


void main()
{ int n,i,a[10][3],t=0,k,j,p;
  float s[50][3],r;

  scanf("%d",&n);
  for(i=0;i<n;i++)
	  scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);

  for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
	{ s[t][0]=i;
      s[t][1]=j;
	  s[t][2]=dis(a[i],a[j]);
	  t++;
	}
  
  for(j=1;j<=t-1;j++)
	  for(i=0;i<t-j;i++)
		  if(s[i][2]<s[i+1][2]) 
		    for(p=0;p<3;p++)
			 { r=s[i][p];s[i][p]=s[i+1][p];s[i+1][p]=r; }

  for(i=0;i<t;i++)
  { j=s[i][0];
    k=s[i][1];
   
	printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",a[j][0],a[j][1],a[j][2],a[k][0],a[k][1],a[k][2],s[i][2]);
  }



 
}