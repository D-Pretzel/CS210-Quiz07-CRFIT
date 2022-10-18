/** quiz07-03.c
* ===========================================================
*    Name:
* Section:
* Purpose: Quiz 7
* ===========================================================
*/

#include <string.h>
#include <stdio.h>

int main(void){
    //Gets three numbers and a string from user
    char day[100];
    int month, d, year;

    scanf("%i %i %i %s", &month, &d, &year, day);

    printf("%.3s-%02i-%02i-%i\n", day, month, d, year);
    return 0;
}