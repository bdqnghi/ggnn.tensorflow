int main()
{
int a,b,f,g,i,c[300];
char d[300];
scanf("%d",&c[0]);


a=c[0];b=-100;
f=0;
g=0;
for(i=1;i<300;i++)
 {scanf("%c%d",&d[i],&c[i]);
  if(d[i]=='\n')  {break;}
  else
    {f=f+1;
   if(c[i]>a){b=a;a=c[i];g=g+1;}
   else if(c[i]<a&&c[i]>b) {b=c[i];g=g+1;}
    }
  }
if(f==0||g==0) printf("No");
else
 printf("%d",b);
return 0;
}
