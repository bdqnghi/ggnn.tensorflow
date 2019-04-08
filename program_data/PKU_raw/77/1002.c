int main(int argc, char* argv[])
{
	char s[100],c;
	int i,k=0,j,len,p,q,temp0,temp1,w;
	int a[50],b[50];
	gets(s);
	c=s[0];
	len=strlen(s);
	for(p=0;p<len/2;p++)            //?????????? ???????? ??len/2?
	{
		for(i=0;i<len-1;i++)
		{            
			if(s[i]==' ')           //??????????
			{
				continue;
			}
			else
			{
				for(j=i+1;j<len-1;j++)       //?????i??????????
				{
					if(s[j]!=' ')
						break;
				}
				if(s[i]==c&&s[j]!=c)         //???i????????????????
				{
					s[i]=' ';s[j]=' ';       //???????? ???????? ?a?b
					a[k]=i;b[k]=j;
					k++;
				}
			}
		}	
	}
    for(p=0;p<k-1;p++)                      //??????????
	{
		for(q=0;q<k-p-1;q++)
		{
			if(b[q]>b[q+1])
			{
				temp0=b[q];
				b[q]=b[q+1];
				b[q+1]=temp0;
                temp1=a[q];
				a[q]=a[q+1];
				a[q+1]=temp1;
			}
		}
	}
	for(w=0;w<k;w++)
	{
        printf("%d %d\n",a[w],b[w]);
	}
	return 0;
}
