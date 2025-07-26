#include<stdio.h>
#include<math.h>

int main(){
    
    // Declaretion 
    float weight,height,BMI;
    
    
    // Input
    printf("Enter Your Weight(KG) and Height(Meter) : ");
    scanf("%f%f",&weight,&height);


    // Logic
    if (weight >0 && height>0)
    {
        
        // float BMI = weight/(height*height);
        BMI = weight/pow(height,2);
        printf("Your Body Mass Index is : %.2f",BMI);
        
        
        if (BMI < 18.5)
        {
            printf("\nYou are Underweight ");
        }
        else if (BMI >=18.5 && BMI <25)
        {
            printf("\nYou are Normal ");
        }
        else if (BMI >=25 && BMI <30)
        {
            printf("\nYou are Overweight ");
        }
        else if (BMI >=30 && BMI <40)
        {
            printf("\nYou are Obesity ");
        }
        else{
            printf("\nYou are Severe Obesity ");
        }
        
        
    
    }else{
        printf("Invalide Inputs");
    }

    
    // Output 
    
    return 0;
}