/** quiz07-01.c
* ===========================================================
*    Name: David Petzold
* Section: T6/7
* Purpose: Quiz 7
* ===========================================================
*/

#include <stdio.h>
#include <string.h>

int main(void){
    //Get user string input
    char str[100];
    scanf("%s", str);

    //Count number of letters and number in string
    int letters = 0;
    int numbers = 0;

    for (int i = 0; i < strlen(str); i++){
        if (str[i] >= '0' && str[i] <= '9'){
            numbers++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z'){
            letters++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z'){
            letters++;
        }
    }
    printf("number of letters: %i\n", letters);
    printf("number of digits: %i\n", numbers);

    return 0;
}