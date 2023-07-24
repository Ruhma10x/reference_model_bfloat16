#include <iostream>
using namespace std;
#include <iomanip>


struct bfloat16{
   unsigned short int data;
   public:
   bfloat16(){
      data = 0;
   }
   //cast to float
   operator float(){
      unsigned int proc = data<<16;
      return *reinterpret_cast<float*>(&proc);
   }
   //cast to bfloat16
   bfloat16& operator =(float float_val){
      data = (*reinterpret_cast<unsigned int *>(&float_val))>>16;
      return *this;
   }
};

//an example that enumerates all the possible values between 1.0f and 300.0f


int main(){




   
   bfloat16 x;
   float b = 3.912348239293f;

    // Setting the precision to 12 decimal places
    cout << setprecision(13);

    // Printing the two variables
    cout << "Double Type Number  = " << b << endl;
    cout << setprecision(20);
   for(x = 0.1f; x < 10.0f; x.data++){
      //printf("Data: %.20f\n",x.data);
      
      std::cout<<x.data<<" "<<x<<endl;
   }
   
   return 0;
}