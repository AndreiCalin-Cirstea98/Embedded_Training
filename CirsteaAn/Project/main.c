int a; //initialise the "a" variable
int b; //initialise the "b" variable
int c; //initialise the "c" variable
  
int function_sum(int x, int y){ //define the function that returns the sum of two nubers
  int sum;
  sum = x+y;
    
  return sum;
}

#define MAX 10 //ex3 start

void ex3(void){
  int x = 2;
  #define MAX 55
  x = MAX;
}               //ex3 end

#define MAX 100 //ex4 start

/*void ex4(void){
  int MAX = 10;
}               //ex4 end
*/

/*#define MAX(i,limit)do\ //ex5 start //did not work
{\
  if(i<limit)\
    {\
      i++;\
    }\
}while(1)

void ex5(void){
  MAX(0,3);
}                       //ex5 end
*/

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
