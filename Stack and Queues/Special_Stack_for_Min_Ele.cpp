struct MyStack 
{ 
    stack<int> s; 
    int minEle; 
  
    void getMin() 
    { 
        if (s.empty()) 
            cout << "Stack is empty\n"; 
        else
            cout<< minEle << "\n"; 
    } 
  
    
    void top() 
    { 
        if (s.empty()) 
        { 
            cout << "Stack is empty "; 
            return; 
        } 
  
        int t = s.top();  
        (t < minEle)? cout << minEle: cout << t; 
    } 
  
    // Remove the top element from MyStack 
    void pop() 
    { 
        if (s.empty()) 
        { 
            cout << "Stack is empty\n"; 
            return; 
        }
        int t = s.top(); 
        s.pop(); 
        if (t < minEle) 
        { 
            cout << minEle << "\n"; 
            minEle = 2*minEle - t; 
        } 
  
        else
            cout << t << "\n"; 
    } 
 
    void push(int x) 
    { 
 
        if (s.empty()) 
        { 
            minEle = x; 
            s.push(x); 
            return; 
        } 
        if (x < minEle) 
        { 
            s.push(2*x - minEle); 
            minEle = x; 
        } 
  
        else
           s.push(x);  
    } 
}; 
