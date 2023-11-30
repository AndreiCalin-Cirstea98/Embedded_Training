int a; //initialise the "a" variable
int b; //initialise the "b" variable
int c; //initialise the "c" variable
  
int function_sum(int x, int y){ //define the function that returns the sum of two nubers
  int sum;
  sum = x+y;
    
  return sum;
}

//ex3 start
#define MAX 10 

void ex3(void){
  int x = 2;
  #define MAX 55
  x = MAX;
}   
//ex3 end

//ex4 start
#define MAX 100 

/*void ex4(void){
  int MAX = 10;
}               
*/
//ex4 end

 //ex5 start //did not work
/*#define MAX(i,limit)do\
{\
  if(i<limit)\
    {\
      i++;\
    }\
}while(1)

void ex5(void){
  MAX(0,3);
}                      
*/
 //ex5 end

//ex6 start
int max_function(int a, int b){
  if(a > b){
    return a;
  } else if (b >= a){
    return b;
  }
}

int average_function(int a, int b){
  return (a+b)/2;
}
//ex6 end

//ex7 start
/* The static keyword in c is used to specify that a variable or a function has static storage duration.
 A variable declared as static inside a function retains its value even after the function has returned,
which means the variable remains in memory throughout the life of the program. 
A static function is a function that can only be called from within the same file that it is defined in.

he volatile keyword in C is used to indicate to the compiler that a variable’s value may change unexpectedly.
This is often the case when a variable is being accessed by multiple threads or when it represents 
hardware that is external to the computer. 
*/
//ex7 end

//ex8 start
struct student{
  char name = ['A', 'N', 'D', 'R', 'E', 'I'];
  unsigned char age = 25;
  unsigned char height  =165;
};
//ex8 end

int main( void ){
  a = 1; //attribute a value to variable "a"
  b = 3; //attribute a value to variable "b"
  c = function_sum(a,b); //variable "c" will store the result of the sum of variables "a" and "b"
  
  #if MAX == 1 //ex2 start
  #define VAR 4
  #else
  #define VAR 5
  #endif        //ex2 end
  
  int d = VAR;
  
  return 0;
}
