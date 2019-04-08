int main( )
{ void sort(int,int,int,int);
  int a,b,c,d;
  for (a=10; a<=50; a+=10)
    for (b=10; b<=50; b+=10)
      for (c=10; c<=50; c+=10)
        for (d=10; d<=50; d+=10)
	if(a!=b &&a!=c &&a!=d &&b!=c &&b!=d &&c!=d     //a,b,c,d????
	   &&(a+b==c+d)
	   &&(a+d>b+c)
	   &&(a+c<b)
	  ) 
	{ sort(a,b,c,d);
	  break;
          }
  return 0;
}

void sort(int a,int b,int c,int d)
{ int weight[4]={a,b,c,d};
  char surname[4]={'z','q','s','l'};
  int i,j,k,temp;
  char tempname;
  for (i=2;i>=0;i--)
    for (j=0;j<=i;j++)
       if (weight[j]<weight[j+1])//???????????????????
       { temp = weight[j];       //weight[j]?surname[j]????????????
         weight[j] = weight[j+1];
         weight[j+1] = temp;

         tempname = surname[j];
         surname[j] = surname[j+1];
         surname[j+1] = tempname;
       }
  for (k=0;k<=3;k++)
    cout <<surname[k] <<' ' <<weight[k] <<endl;
}