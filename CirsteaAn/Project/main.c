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
