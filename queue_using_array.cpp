void enqueue(int e)
	{
		if(rear==arr.size()-1)
		{
			return ;
		}
		else
		{
			arr[rear]=e;
			rear++;
		}
	}

	// Dequeue (retrieve) the element from the front of the queue.
	int dequeue()
	{
		if(front==rear)
		{
			return -1;
		}
		else
		{
                           int k=arr[front];
			 front++;
			 if(front==rear)
			 {
				 front=0;      //this is done to avoid space wastage if no elelemt remains after deque operation
				 rear=0;
			 }
			 return k;
		}
	}
