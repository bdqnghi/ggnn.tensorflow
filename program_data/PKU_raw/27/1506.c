int main(int argc, char *argv[])
{
  int n,i;
  double a,b,c;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {scanf("%lf%lf%lf",&a,&b,&c);
  if(b*b-4*a*c>=0.00001)
  printf("x1=%.5f;x2=%.5f",(-b+sqrt(b*b-4*a*c))/(2*a),(-b-sqrt(b*b-4*a*c))/(2*a));
  else if(b*b-4*a*c<=-0.00001&&b!=0) 
  printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi",-b/(2*a),sqrt(4*a*c-b*b)/(2*a),-b/(2*a),sqrt(4*a*c-b*b)/(2*a));
  else if(b*b-4*a*c<=-0.00001&&b==0) 
  printf("x1=0.00000+%.5fi;x2=0.00000-%.5fi",sqrt(4*a*c)/(2*a),sqrt(4*a*c)/(2*a));
  else printf("x1=x2=%.5f",-b/(2*a));
  if(i!=n) printf("\n");
}	
  return 0;
}
