void main()
{
 unsigned long y,w;
 int m,d;
 scanf("%ld %d %d",&y,&m,&d);
 if(m==1) {m=13;y=y-1;}
 if(m==2) {m=14;y=y-1;}
 w=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400+1)%7;
 switch(w)
 {
  case 1: printf("Mon.");break;
  case 2: printf("Tue.");break;
  case 3: printf("Wed.");break;
  case 4: printf("Thu.");break;
  case 5: printf("Fri.");break;
  case 6: printf("Sat.");break;
  case 0: printf("Sun.");break;
 }
 if(w>6||w<0) printf("%d",w);
}