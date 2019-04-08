//      resort.c
//      
//      Copyright 2009 JacksonTB <jacksontb@jacksontb-laptop>
//      
//      This program is free software; you can redistribute it and/or modify
//      it under the terms of the GNU General Public License as published by
//      the Free Software Foundation; either version 2 of the License, or
//      (at your option) any later version.
//      
//      This program is distributed in the hope that it will be useful,
//      but WITHOUT ANY WARRANTY; without even the implied warranty of
//      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//      GNU General Public License for more details.
//      
//      You should have received a copy of the GNU General Public License
//      along with this program; if not, write to the Free Software
//      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
//      MA 02110-1301, USA.



typedef struct NODE{
	int value;
	struct NODE *fwd;
	struct NODE *bwd;
}node;

int main(int argc, char** argv)
{
	int m, n, i;
	node *rootp, *recp, *prep,*lastp;
	
	rootp = (node*) malloc(sizeof(node));
	rootp -> fwd = NULL;
	prep = rootp;
	
	scanf("%d %d", &n, &m);
	for(i = 1;i <= n;i ++)
	{
		recp = (node*) malloc(sizeof(node));
		if(recp == NULL)
		{
			printf("Not enough memory");
			return EXIT_FAILURE;
		}
		scanf("%d", &(recp -> value));
		recp -> bwd = prep;
		prep -> fwd = recp;
		recp -> fwd = NULL;
		prep = recp;
	}
	
	recp = rootp;
	for(i = 1;i <= n - m + 1;i ++)
	{
		recp = recp -> fwd;
	}
	
	
	
	lastp = rootp;
	while(lastp -> fwd != NULL)
	{
		lastp = lastp -> fwd;
	}
	
	lastp -> fwd = rootp -> fwd;
	rootp -> fwd -> bwd = lastp;
	rootp -> fwd = recp;
	recp -> bwd -> fwd = NULL;
	recp = rootp -> fwd;
	while(recp != NULL)
	{
		printf("%d", recp -> value);
		prep = recp;
		recp = recp -> fwd;
		if(recp != NULL) printf(" ");
		free(prep);
	}
	
	return 0;
}
