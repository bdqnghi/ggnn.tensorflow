int main() 
{ 
    int s[15];int a,b;
	int i,t,h,k;
	for(i=0;i<=100;i++)
	{
		b=0;a=0;
		for(t=0;t<17;t++)
		{
		 scanf("%d",&s[t]);
		 if(s[t]==0)break;
         if(s[t]==-1)break;
		 a++;
		}
	    if(s[t]==-1)break;
		for(k=0;k<a;k++)
		{
			for(h=0;h<a;h++)
			{
				if(s[k]==2*s[h]){b++;}
				else{b=b;}
			 }
		}
	printf("%d\n",b);
	}
    return 0;
}

