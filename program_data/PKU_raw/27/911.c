int main()
{
	int n,i;
	double a[100],b[100],c[100],x1[100],x2[100],y1[100],y2[100],d[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i] >>b[i] >>c[i];
		d[i]=b[i]*b[i]-4*a[i]*c[i];
	}
	for(i=0;i<n;i++)
	{
		if(d[i]>0)
		{
			x1[i]=(-b[i]+sqrt(d[i]))/(2*a[i]);
			x2[i]=(-b[i]-sqrt(d[i]))/(2*a[i]);
			printf("x1=%.5f;x2=%.5f\n",x1[i],x2[i]);
		}
		else if(b[i]*b[i]-4*a[i]*c[i]<0)
		{
			x1[i]=(-b[i]/(2*a[i])),y1[i]=sqrt(-d[i])/(2*a[i]);
			x2[i]=(-b[i]/(2*a[i])),y2[i]=-sqrt(-d[i])/(2*a[i]);
			if(b[i]!=0)
			{
				if(a[i]>0)
			    printf("x1=%.5f+%.5fi;x2=%.5f%.5fi\n",x1[i],y1[i],x2[i],y2[i]);
			    else
			    printf("x1=%.5f%.5fi;x2=%.5f+%.5f\n",x1[i],y1[i],x2[i],y2[i]);
			}
			else
			{
				if(a[i]>0)
			    printf("x1=0.00000+%.5fi;x2=0.00000%.5fi\n",y1[i],y2[i]);
			    else if(a[i]<0)
			    printf("x1=0.00000%.5fi;x2=0.00000+%.5fi\n",y1[i],y2[i]);
			}



		}
		else
		{
			x1[i]=-b[i]/(2*a[i]);
			x2[i]=x1[i];
			printf("x1=x2=%.5f\n",x1[i]);
		}
	}
	return 0;
}
