
int main(){
	int a,b,i;
	int c=0;
	int d=0;
	int e=0;
	int	f=0;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
    {scanf("%d",&b);
    if(b<=18){c++;
	}else if(b<=35){d++;}
	else if(b<=60){e++;}
	else{f++;}
	}
printf("1-18: %.2lf%\n19-35: %.2lf%\n36-60: %.2lf%\n60??: %.2lf%\n",
		1.0*c/a*100,
		1.0*d/a*100,
		1.0*e/a*100,
		1.0*f/a*100);
return 0;
}
