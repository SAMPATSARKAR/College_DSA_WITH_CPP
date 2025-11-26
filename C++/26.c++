#include <iostream>
using namespace std ;

class CustomException : public std::exception {
    
    private :
        string msg ;
        int code ;
    
    public : 
    CustomException(string msg , int code){
        this->code = code ;
        this->msg  = msg ;
    }
    
    const char* what() const noexcept override {
        
        return this->msg.c_str() ;
    }
    
    
      int getStatusCode() const{
        return this->code ;
    }
    
} ; 
int main() {
    
    int x ,y ;
    cin>>x>>y ;
    int ans ;
    try {
        if(y == 0){
            throw  CustomException("Zero division error " , 400) ; 
        }
        ans = x/y ;
         cout<<ans ;
    }
    catch(const  CustomException &e) {
        cout<<e.what()<<"status code : "<<e. getStatusCode() ;
    }
    
   

    return 0;
}