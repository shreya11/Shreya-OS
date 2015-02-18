#include<stdio.h>
struct semaphore
{
	int value;
	int queue[2]; 
};

int product=0;

void enqueue(struct semaphore s,int id)
{
	if(s.queue[0]==0)
		s.queue[0]=id;
	else if(s.queue[1]==0)
		s.queue[1]=id;
	else
		printf("Buffer is full...");	
}

void dequeue(struct semaphore s)
{
	 if(s.queue[0]!=0)
	{
		s.queue[0]=s.queue[1];	
		s.queue[1]=0;
	}		
}

void sem_Wait(struct semaphore s,int id)
{
	if(s.value==1)
		s.value=0;
	else
		enqueue(s,id);
}

void sem_Signal(struct semaphore s)
{
	s.value=0;
	dequeue(s);
}

void producer(struct semaphore s,int id)
{
	sem_Wait(s,id);
	if(product==0)
	{
		product=1;
		printf("\nProducts: %d ",product);
	}
	else
	{
		printf("Buffer is Full...");
		printf("Products: %d",product);
	}
	sem_Signal(s);	
}

void consumer1(struct semaphore s,int id)
{
	sem_Wait(s,id);
	if(product==1)
	{
		product=0;
		printf("\nProducts: %d",product);
	}
	else
	{
		printf("Buffer is empty...");
		printf("\nProducts: %d",product);
	}
sem_Signal(s);	
}

void consumer2(struct semaphore s,int id)
{
	sem_Wait(s,id);
	if(product==1)
	{
		product=0;
		printf("\nProducts: %d",product);
	}	
	else
	{
		printf("Buffer is empty");
		printf("\nProducts: %d",product);
	}
	sem_Signal(s);	
}

int main()
{
	struct semaphore s;
	s.value=1;
	s.queue[0]=0;
	s.queue[1]=0;
	int choice;
	while(1)
	{
	printf("\n\nSelect one to Continue \n1.Producer\n2.Consumer-01\n3.Consumer-02\n");
	scanf("%d",&choice);
	switch (choice)
		{
			case 1:
				producer(s,1);
				break;
			case 2:
				consumer1(s,2);
				break;
			case 3:
				consumer2(s,3);
				break;
		}
	}
}




