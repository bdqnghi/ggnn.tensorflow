int a=0,b=0,c=0,d=0,e=0;
void one(char x)
{
	char y;
	switch(x)
	{
	case 'A':y='0';break;
	case 'B':y='0';break;
	case 'C':a=5;c=1;y='C';break;
	case 'D':if(c!=1)
			 {
				 d=1;
				 y='D';
			 }
			 else
			 {
				 y='0';
			 }
			 break;
	case 'E':y='0';break;
	}
	if(y=='0')
	{
		one(x+1);
	}
}
void two(char x)
{
	char y;
	switch(x)
	{
	case 'A':if(a==1||e!=1)
			 {
				 y='0';
			 }
			 else
			 {
				 a=2;
				 y='A';
			 }
			 break;
	case 'B':if(b==1)
			 {
				 y='0';
			 }
			 else
			 {
				 b=2;
				 y='B';
			 }
			 break;
	case 'C':if(c==1)
			 {
				 y='0';
			 }
			 else
			 {
				 c=2;
				 a=5;
				 y='C';
			 }
			 break;
	case 'D':if(c==1||d==1)
			 {
				 y='0';
			 }
			 else
			 {
				 d=2;
				 y='D';
			 }
			 break;
	case 'E':y='0';break;
	}
	if(y=='0')
	{
		two(x+1);
	}
}
void three(char x)
{
	char y;
	switch(x)
	{
	case 'A':if(a==1||a==2||c==1||c==2||e==1)
			 {
				 y='0';
			 }
			 else
			 {
				 a=3;
				 y='A';
			 }
			 break;
	case 'B':if(b==1||b==2)
			 {
				 y='0';
			 }
		else
		{
			b=3;
			y='B';
		}
		break;
	case 'C':if(c==1||c==2||a==5||(d!=1&&d!=2))
			 {
				 y='0';
			 }
		else
		{
			c=3;
			y='C';
		}
		break;
	case 'D':if(d==1||d==2||e==1||e==2||c!=1)
			 {
				 y='0';
			 }
		else
		{
			d=3;
			y='D';
		}
		break;
	case 'E':y='0';break;
	}
	if(y=='0')
	{
		three(x+1);
	}
}
void four(char x)
{
	char y;
	switch(x)
	{
	case 'A':if(a==1||a==2||a==3||c==1||c==2||e==1)
			 {
				 y='0';
			 }
		else
		{
			a=4;
			y='A';
		}
		break;
	case 'B':if(b==1||b==2||b==3)
			 {
				 y='0';
			 }
		else
		{
			b=4;
			y='B';
		}
		break;
	case 'C':if(c==1||c==2||c==3||(d!=1&&d!=2))
			 {
				 y='0';
			 }
		else
		{
			c=4;
			y='C';
		}
		break;
	case 'D':if(d==1||d==2||d==3||e==1||e==2||c!=1)
			 {
				 y='0';
			 }
		else
		{
			d=4;
			y='D';
		}
		break;
	case 'E':if(e==1||e==2||e==3||d==1)
			 {
				 y='0';
			 }
		else
		{
			e=4;
			y='E';
		}
		break;
	}
	if(y=='0')
	{
		four(x+1);
	}
}
void five(char x)
{
	char y;
	switch(x)
	{
	case 'A':if(a==1||a==2||a==3||a==4||(c!=1&&c!=2)||e==1)
			 {
				 y='0';
			 }
		else
		{
			a=5;
			y='A';
		}
		break;
	case 'B':if(b==1||b==2||b==3||b==4)
			 {
				 y='0';
			 }
		else
		{
			b=5;
			y='B';
		}
		break;
	case 'C':if(c==1||c==2||c==3||c==4||(d!=1&&d!=2))
			 {
				 y='0';
			 }
		else
		{
			c=5;
			y='C';
		}
		break;
	case 'D':if(d==1||d==2||d==3||d==4||e==1||e==2||c!=1)
			 {
				 y='0';
			 }
		else
		{
			d=5;
			y='D';
		}
		break;
	case 'E':if(e==1||e==2||e==3||e==4||d==1)
			 {
				 y='0';
			 }
		else
		{
			e=5;
			y='E';
		}
		break;
	}
	if(y=='0')
	{
		five(x+1);
	}
}
int main()
{
	void one(char x);
	void two(char x);
	void three(char x);
	void four(char x);
	void five(char x);
	char now='A';
	one(now);
	two(now);
	three(now);
	four(now);
	five(now);
	printf("%d %d %d %d %d\n",a,b,c,d,e);
	return 0;
}
