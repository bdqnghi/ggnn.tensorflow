float a[10];
int b[10];
float c[10];
float d[10];
int main()
{
	int n,i,j;
	float GPA,sum,pts;
	GPA=0;
	sum=0;
	pts=0;
	scanf("%d", &n);
	for(j=0;j<n;j++)
	{
		scanf("%f", &a[j]);
		pts+=a[j];
	}
	for(i=0;i<n;i++)
	{
		scanf("%d", &b[i]);
		switch(b[i])
		{
		case 60:
			c[i]=1;
			break;
case 61:
			c[i]=1;
			break;
case 62:
			c[i]=1;
			break;
case 63:
			c[i]=1;
			break;
case 64:
			c[i]=1.5;
			break;
case 65:
			c[i]=1.5;
			break;
case 66:
			c[i]=1.5;
			break;
case 67:
			c[i]=1.5;
			break;
case 68:
			c[i]=2;
			break;
case 69:
			c[i]=2;
			break;
case 70:
			c[i]=2;
			break;
case 71:
			c[i]=2;
			break;
case 72:
			c[i]=2.3;
			break;
case 73:
			c[i]=2.3;
			break;
case 74:
			c[i]=2.3;
			break;
case 75:
			c[i]=2.7;
			break;
case 76:
			c[i]=2.7;
			break;
case 77:
			c[i]=2.7;
			break;
case 78:
			c[i]=3;
			break;
case 79:
			c[i]=3;
			break;
case 80:
			c[i]=3;
			break;
case 81:
			c[i]=3;
			break;
case 82:
			c[i]=3.3;
			break;
case 83:
			c[i]=3.3;
			break;
case 84:
			c[i]=3.3;
			break;
case 85:
			c[i]=3.7;
			break;
case 86:
			c[i]=3.7;
			break;
case 87:
			c[i]=3.7;
			break;
case 88:
			c[i]=3.7;
			break;
case 89:
			c[i]=3.7;
			break;
case 90:
			c[i]=4;
			break;
case 91:
			c[i]=4;
			break;
case 92:
			c[i]=4;
			break;
case 93:
			c[i]=4;
			break;
case 94:
			c[i]=4;
			break;
case 95:
			c[i]=4;
			break;
case 96:
			c[i]=4;
			break;
case 97:
			c[i]=4;
			break;
case 98:
			c[i]=4;
			break;
case 99:
			c[i]=4;
			break;
case 100:
			c[i]=4;
			break;
default:
			c[i]=0;
			break;
		}
		d[i]=c[i]*a[i];
		sum+=d[i];
	}
	GPA=sum/pts;
	printf("%.2f", GPA);
	return 0;
}