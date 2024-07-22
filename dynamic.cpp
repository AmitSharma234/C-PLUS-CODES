    #include <iostream>  
    using namespace std;    
    class jtp {  
    int* ptr;  
    public:  
    jtp()      {  
    ptr = new int;  
    *ptr = 10;  
    }  
      
    void display()  {  
    cout<< *ptr<<endl;  
    }  
    };  
      
    int main()    {  
    jtp obj1;    
    obj1.display();   
    return 0;  
    }  