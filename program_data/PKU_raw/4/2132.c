
int h,l,(*p)[100];
void shuchu(int a)
{int r,c,i=0;
 r=0;c=a;
 for(;r<h;i++)
 {if(c>=0&&c<l)
	printf("%d\n",*(*(p+r)+c));
  r+=1;c-=1;
 }

}

int main()
{int i,j;
 scanf("%d %d",&h,&l);
p=(int (*)[100])malloc(h*100*sizeof(int));
 for(i=0;i<h;i++)
  for(j=0;j<l;j++)
	  scanf("%d",*(p+i)+j);
  for(i=0;i<h+l-1;i++)
	  shuchu(i);
}