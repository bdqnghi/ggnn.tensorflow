int main () 
{
int a[100][100];
int row, col, i=0, j=0, left=0, right=0, up=0, down=0;
int x=0;
scanf("%d%d",&row,&col);
down=row;
right=col;
for (; i<row; i++) 
{
for (j=0; j<col; j++) 
{
scanf("%d",&a[i][j]);
}
}
i=0,j=0;
for (; ; ) 
{
for (; j<right; j++) 
{
printf("%d\n",a[i][j]);
x++;
}
j--;
if (x>=col*row) 
{
break;
}
i++;
for (; i<down; i++) 
{
printf("%d\n",a[i][j]);
x++;
}
i--;
if (x>=col*row) 
{
break;
}
j--;
for (; j>=left; j--) 
{
printf("%d\n",a[i][j]);
x++;
}
j++;
if (x>=col*row) 
{
break;
}
i--;
for (; i>up; i--) 
{
printf("%d\n",a[i][j]);
x++;
}
if (x>=col*row) 
{
break;
}
i++;
j++;
right--;
left++;
up++;
down--;
}
return 0;
}