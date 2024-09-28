#include <stdio.h>
#include <math.h>
int main(){
    int total_price;
    int total_price1;
    int distance_in_km;
    int delivery_charge=60;
   
   
    printf("\nenter 0 if the total distance is more than 5 km and 1 if total distance is less than 5: ");
    scanf("%d",&distance_in_km);
    if(distance_in_km==1 ){
        printf("you have got free delivery!!");
        printf("\nenter total price(rupees): ");
        // total price is in rupees
        scanf("%d",&total_price1 );
        printf("your final price is %d rupees.", total_price1);
       
    }else if(distance_in_km==0){
         printf("pay delivery charge of rupees 60 ");
         printf("\nenter total price(rupees): ");
         scanf("%d",&total_price );
         total_price1=total_price+delivery_charge;
         printf("your final price is %d rupees.", total_price1);
    }else{
        printf("Please enter valid input");
    }
   
     
    return 0;

}
