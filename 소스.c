#include <stdio.h>
int Test(int size[], int N, int front, int rear)
 {
 	int M = size[front], index = 0;
 	for (int i = front + 1; i <= rear; i++)
 	{
		if (M < size[i])
 		{
 			M = size[i], index = i;
 		}
  	}
  	return index;
  }
  
  int main(void)
  {
  	int  N, M, size[100], Index, front, rear, now;
  	
  
  	scanf("%d%d", &N, &M);
  	front = 0;
  	now = 0;
  	rear = N - 1;
  
  	for (int i = 0; i < N; i++)
  	{
  		scanf("%d", &size[i]);
  	}
  
  	while (front - 1 != M)
  	{ 			Index = Test(size, N, front, rear);
  
 			for (int i = front; i < Index; i++)
 			{
 				size[++rear] = size[front++];
 				M = M == front - 1 ? rear : M;
 			}
 
  			front++;
 			now++;
  	} 
 	
  	printf("%d\n", now); 	
 
	return 0;
  }
