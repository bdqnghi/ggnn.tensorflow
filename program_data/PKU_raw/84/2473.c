int main()
{
int ax[100];
int a=0;
int i;
scanf("%d",&i);
while (a<=i-1)
{scanf("%d",&ax[a]);
a++;
}
int b=0,c,k=1;
while (k<i)
{b=0;
     while (b<i-k)
	 {
	      if(ax[b]>=ax[b+1])
		  {c=ax[b];
		   ax[b]=ax[b+1];
		   ax[b+1]=c;
		  }
	  b++;
	 }
k++;
}
printf("%d\n%d",ax[i-1],ax[i-2]);
return 0;
}