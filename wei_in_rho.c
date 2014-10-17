// weight_value.c
#include <stdio>
void ask(void);

void ask(void)
{
      printf("What's your weight?\n");
}

int main(void)
{
      float weight,value,price;
      ask();
      printf("My weight is :");
      scanf("%f",&weight);
      printf("\nAnd the price is :");
      scanf("%f",&price);
      value=weight*price*14.5833;
      printf(Aha! Your weight in rhodium is worth $%.2f.\n",value);
}
      
