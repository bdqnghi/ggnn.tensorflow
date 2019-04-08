void main()
{
  unsigned long y,m,d,t;
  scanf("%ld%ld%ld",&y,&m,&d);
  if(m==1||m==2) {m+=12;y--;}
  t=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400+1)%7;
  switch(t)
  {
    case 0: P("Sun.");B;
    case 1: P("Mon.");B;
    case 2: P("Tue.");B;
    case 3: P("Wed.");B;
    case 4: P("Thu.");B;
    case 5: P("Fri.");B;
    case 6: P("Sat.");B;
  }
}