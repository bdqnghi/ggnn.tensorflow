  int main(){
  int n,a,b,c,d,e;
  scanf("%d",&n);
  a=n/10000;
  b=n/1000-a*10;
  c=n/100-100*a-10*b;
  d=n/10-1000*a-100*b-10*c;
  e=n%10;
  if(a!=0){n=10000*e+1000*d+100*c+10*b+a;
  }else if(a==0&&b!=0){n=1000*e+100*d+10*c+b;
  }else if(b==0&&c!=0){n=100*e+10*d+c;
  }else if(c==0&&d!=0){n=10*e+d;
  }else if(d==0&&e!=0){n=n;
  }
    
    printf("%d",n);
   return 0;
  }