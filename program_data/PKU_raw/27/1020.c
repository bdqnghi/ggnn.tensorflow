int main( )
{ int n,i;
  double a,b,c,delta,x1,x2,x11,x12;
  cin >>n;
  cout <<fixed <<setprecision(5);              //???????5?
  for (i=1;i<=n;i++)
  { cin >>a >>b >>c;
    delta = b*b -4*a*c;                        //?????
    if (delta==0)                              //????0????????
    { x1 = (-b/(2*a));
      cout <<"x1=x2=" <<x1 <<endl;
     }
    else if (delta>0)                          //?????????????
    { x1 = (-b +sqrt(delta))/(2*a);
      x2 = (-b -sqrt(delta))/(2*a);
      cout <<"x1=" <<x1 <<";x2=" <<x2 <<endl;
    }
    else                                       //???????????
    { delta = -delta;
      x11 = (-b/(2*a));
      if (fabs(x11) <0.00001) x11 = fabs(x11);
      x12 = (sqrt(delta)) /(2*a);
      x12 = fabs(x12);
      cout <<"x1=" <<x11 <<'+' <<x12 <<"i;x2="
	 <<x11 <<'-' <<x12 <<'i' <<endl;
	}
  }
  return 0;
}
