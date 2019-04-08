int main(int argc, char* argv[])
{int k,n,i,j;
 scanf("%d",&k);
 for(i=0;i<k;i++)
 {double num[100];
  scanf("%d",&n);
  double sum=0;
  for(j=0;j<n;j++)
  { scanf("%lf",&num[j]);
	sum+=num[j];
  }
  double ave;
  ave=sum/n;
  double psum=0,d;
  for(j=0;j<n;j++)
  {psum+=pow((num[j]-ave),2);
  }
  d=sqrt(psum/n);
  printf("%.5f\n",d);
 }

	
	return 0;
}

