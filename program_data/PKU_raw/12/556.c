


int main(int argc, char* argv[])
{ 
	int i,a[16],s=0,j;scanf("%d",&a[0]);
	while(a[0]!=-1)
	{
		for(i=1;i<=15;i++)
		{scanf("%d",&a[i]);
		if(a[i]==0)break;
		for(j=0;j<=i;j++)
			if(a[j]==2*a[i]||a[j]==0.5*a[i])s+=1;
		}printf("%d\n",s);
		s=0;
		scanf("%d",&a[0]);
	}


return 0;
}
