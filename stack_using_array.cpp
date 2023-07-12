class Stack {
    
public:
    int Top;
    int* arr;
    int size;
    Stack(int capacity) 
    {
        Top=-1;
        size=capacity;
        arr=new int[capacity];
    }

    void push(int num) 
    {
        if(Top==size-1)
        {
            return;    //stack full condition
        }
        else
        {
             Top++;
             arr[Top]=num;
        }
    }

    int pop() {
        if(Top==-1)
        {
            return -1;   //empty stack code
        }
        else
        {
            int k=arr[Top];
            Top--;
            return k;
        }
    }
    
    int top() {
        if(Top==-1)
          return -1;
        else
        return arr[Top];
    }
    
    int isEmpty() {
        if(Top==-1)
        return 1;
        else
        return -0;
    }
    
    int isFull() {
       if(Top==size-1)
       return 1;
       else
       return 0;
    }
    
};
