

#include <stdio.h>
float getOperand(){
    float num;
    printf ("Enter Operand:\n");
    scanf ("%f", &num);
    return num;
}
float add(){
    float num1 = getOperand();
    float num2 = getOperand();
    return num1+num2;
}
float subtract(){
    float num1 = getOperand();
    float num2 = getOperand();
    return num1-num2;
}
float multiply(){
    float num1 = getOperand();
    float num2 = getOperand();
    return num1*num2;
}
float divide(){
    float num1 = getOperand();
    float num2 = getOperand();
    if(num2 == 0){
        return 0;
    }
    return num1/num2;
}
int andOpration(){
    int bool1 = getOperand();
    int bool2 = getOperand();
    
    return bool1&&bool2;
}
int orOpration(){
    int bool1 = getOperand();
    int bool2 = getOperand();
    
    return bool1||bool2;
}
int notOpration(){
    int bool = getOperand();
    
    return !bool;
}
int xorOpration(){
    int num1 = getOperand();
    int num2 = getOperand();
    
    return num1^num2;
}
int reminder(){
    int num1 = getOperand();
    int num2 = getOperand();
    
    return num1%num2;
}
float increment(){
    float num = getOperand();
    return ++num;
}
float decrement(){
    float num = getOperand();
    return --num;
}

float calc (int operationId)
{
    if (operationId == 1){
        return add();
    }else if(operationId == 2){
        return subtract();
    }else if(operationId == 3){
        return multiply();
    }else if(operationId == 4){
        return divide();
    }else if(operationId == 5){
        return andOpration();
    }else if(operationId == 6){
        return orOpration();
    }else if(operationId == 7){
        return notOpration();
    }else if(operationId == 8){
        return xorOpration();
    }else if(operationId == 9){
        return reminder();
    }else if(operationId == 10){
        return increment();
    }else if(operationId == 11){
        return decrement();
    }
}

int
main ()
{
  printf ("Enter Operation Id:\n");
  int operationId;
  scanf ("%d", &operationId);
  printf ("Result Is %f\n",calc (operationId));;
  return 0;
}
