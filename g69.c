/*In a logistics company, a system is being developed to manage the assignment of delivery vehicles to different regions. For security and tracking purposes, each vehicle and region pair has a unique identifier.



The system administrator needs to input these identifiers, but due to a recent software update, the input fields for vehicle and region IDs have been swapped. The system now expects the region ID in the vehicle ID input field and vice versa.

Input format :
The input consists of space-separated two integers: the first representing the vehicle ID and the second representing the region ID.

Output format :
The first line should display the text "A: " followed by the value of the region ID.

The second line should display the text "B: " followed by the value of the vehicle ID.*/

#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
   
    printf("A: %d\n" ,b);
    printf("B: %d" ,a);
   
    return 0;
}
