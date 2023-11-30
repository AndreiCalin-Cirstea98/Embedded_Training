int a; //initialise the "a" variable
int b; //initialise the "b" variable
int c; //initialise the "c" variable
  
int function_sum(int x, int y){ //define the function that returns the sum of two nubers
  int sum;
  sum = x+y;
    
  return sum;
}

int main( void ){
  a = 1; //attribute a value to variable "a"
  b = 3; //attribute a value to variable "b"
  c = function_sum(a,b); //variable "c" will store the result of the sum of variables "a" and "b"
  
  return 0;
}
