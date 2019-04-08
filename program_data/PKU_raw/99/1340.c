int main()
{
int age[100],n,i;float a,b,c,d,p=0,q=0,r=0,s=0;
scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      scanf("%d",&age[i]);
	  if(age[i]<=18)
	  {p+=1;}
	  if(age[i]<=35&&age[i]>=19)
	  {q+=1;}
      if(age[i]<=60&&age[i]>=36)
	  {r+=1;}
	  if(age[i]>60)
	  {s+=1;}
   }
   a=p/n*100;
   b=q/n*100;
   c=r/n*100;
   d=s/n*100;

printf("1-18: %.2f%%\n",a);
printf("19-35: %.2f%%\n",b);
printf("36-60: %.2f%%\n",c);
printf("60??: %.2f%%\n",d);
return 0;
}