struct s{
	int num;
	int x;
	int y;
	int z;
}s[100000],s1,s2,s3,A;
int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&s[i].num,&s[i].x,&s[i].y);
		s[i].z=s[i].x+s[i].y;
	}
	if(s[0].z>=s[1].z)
	{
		s1=s[0];
		s2=s[1];
	}
	else
	{
		s1=s[1];
		s2=s[0];
	}
	if(s[2].z>=s1.z)
	{
		A=s1;
		s1=s[2];
		s3=s2;
		s2=A;
	}
	else if(s[2].z<s2.z)
	{
		s3=s[2];
	}
	else if(s[2].z>=s2.z&&s[2].z<s1.z)
	{
		s3=s2;
		s2=s[2];
	}
	for(i=3;i<n;i++)
	{
		if(s[i].z>s1.z)
		{
			s3=s2;
			s2=s1;
			s1=s[i];
		}
		else if(s[i].z<s3.z)
		{
			;
		}
		else if(s[i].z<s1.z&&s[i].z>s3.z)
		{
			if(s[i].z>s2.z)
			{
				s3=s2;
				s2=s[i];
			}
			else
			{
				s3=s[i];
			}
		}
		else if (s[i].z==s1.z)
		{
			s3=s2;
			s2=s[i];
		}
		else if(s[i].z==s2.z)
		{
			s3=s[i];
		}
	}
	printf("%d %d\n",s1.num,s1.z);
	printf("%d %d\n",s2.num,s2.z);
	printf("%d %d\n",s3.num,s3.z);
	return 0;
}