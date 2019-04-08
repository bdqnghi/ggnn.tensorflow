int main(){
int n;
scanf("%d",&n);
float sum=0;
int a;
double m=0;
int i=1;
int b;
double c;
double d;

int score[100];
while(i<=n)
{
	scanf("%d",&a);
	score[i]=a;
    m+=a;
	i++;
}
   int j=1;
while(j<=n)
{
	scanf("%d",&b);
	if(b>89){c=4.0;}
	else if(b>84){c=3.7;}
else if(b>81){c=3.3;}
else if(b>77){c=3.0;}
else if(b>74){c=2.7;}
else if(b>71){c=2.3;}
else if(b>67){c=2.0;}
else if(b>63){c=1.5;}
else if(b>59){c=1.0;}
else {c=0;}
sum+=c*score[j];
j++;
}
d=sum/m;
printf("%.2lf",d);
return 0;
}