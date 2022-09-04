language = bash;
run = 
/*#include<stdio.h>
#include<stdlib.h>

int max(int num1,int num2, int num3){
  int result;
  if(num1>=num2 && num1>=num3){
    result = num1;
  }
  else if(num2>=num1 && num2>=num3){
    result = num2; 
  }
  else{
    result = num3;
  }
  return result;
}

int main()
{


  if(!(3>2)){
    printf("True");
    
  }else{
    printf("False");
  }
  
  printf("%d",max(40,30,10));
  

  
  return 0;
  
}*/

#include<stdio.h>
#include<stdlib.h>
int main(){

  double num1;
  double num2;
  char op;

  printf("Enter a number: ");
  scanf("%f", &num1);
  printf("Enter operator: ");
  scanf("%lf", &num2);

  if(op == '+'){
    printf("%f",num1+num2);
    
  }else if(op == '-'){
    printf("%f",num1-num2);
    
  }else if(op == '*'){
    printf("%f",num1*num2);
    }else if(op == '/'){
    printf("%f",num1/num2);
    
    }else{
    printf("Press any key to continue");
  }
  
  return 0;

}