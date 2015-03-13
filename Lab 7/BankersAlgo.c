#include<stdio.h>

int main()
{
	int j, pr,ins,rs,a,b,d,e,f,g,flag=1;
	
	
	printf("\nEnter the number of processes: ");
	scanf("%d", &pr);
	
	printf("\nEnter the number of resources: ");
	scanf("%d", &rs);
	
	int i[1][rs];
	printf("\nMaximum Instances: ");
	for(j=0;j<rs;j++)
	{
	printf("i[0][%d]: ",j);
	scanf("%d",&i[0][j]);
	}

	
	int c[pr][rs], al[pr][rs], need[pr][rs],avail[1][rs];

	printf("\n Enter the maximum resources: ");
	for(a=0; a<pr;a++)
	{
		for(b=0;b<rs;b++)
		{
		
		printf("\n c[%d][%d]: ",a,b);
		scanf("%d", &c[a][b]); 
		}
	}
	
	for(a=0;a<pr;a++)
	{
		for(b=0;b<rs;b++)
		{
			
			printf("\t%d",c[a][b]);
		}
		printf("\n");	
	}
	
	printf("\n Enter the allocated resources: ");
	for(e=0; e<pr;e++)
	{
		for(d=0;d<rs;d++)
		{
		
		printf("\n al[%d][%d]: ",e,d);
		scanf("%d", &al[e][d]); 
		}
	}
	
	for(e=0;e<pr;e++)
	{
		for(d=0;d<rs;d++)
		{
			
			printf("\t%d",al[e][d]);
		}
		printf("\n");	
	}
	
	
	printf("\n so the needed resources are:\n ");	
	for(f=0; f<pr;f++)
	{
		for(g=0;g<rs;g++)
		{
		need[f][g]=c[f][g]-al[f][g];
		
		printf("\t %d ",need[f][g]);
		}
		printf("\n");
	}
	
	

	
	printf("\n so the available resources are:\n ");	
	
	for(f=0;f<rs;f++)
	{
		for(g=0;g<pr;g++)
		{
			i[0][f]=i[0][f]-al[g][f];
			avail[0][f]=i[0][f];
		
		}
		
		printf("\t %d ",i[0][f]);
		i[0][f]=avail[0][f];
		
	}
	printf("\n");



int ans[1][rs];
	for(g=0;g<rs;g++)
		{
			ans[0][rs]=0;
		}

	

while(flag!=0)
{
	for(f=0;f<pr;f++)
	{
		for(g=0;g<rs;g++)
		{
			
		//ans[0][rs]=-1;
			
			if(need[f][g]>i[0][g])
			{
				flag=0;
				//break;
			}
			else
			{
			//continue;
				
			
				
				i[0][g]=i[0][g]+al[f][g];
				
				printf("\tavailbale=%d",i[0][g]);
				need[f][g]=0;
			}
		
				
		}

		printf("\n");

	}
	if(flag==0)
	{
		printf("\nunsafe state\n");
	}
	else
	
		printf("\nsafe state\n");	
		flag=0;
	
}
}
