#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char* s) {
    int str_len = strlen(s);
    int count = 0;
    int end_register = str_len;
    for(int i = str_len - 1; i >= 0; i--){
        if(s[i] != ' '){
          end_register = i;
          break;
        }
    }
    //printf("%d\n", end_register);
    for(int i = end_register; i >= 0; i--){
        
        if(s[i] == ' '){
            //printf("%c\n", s[i]);
            break;
        }
        count++;
    }
    return count;
}


int main(){
    char* s = "day    ";
    printf("%d", lengthOfLastWord(s));
    return 0;
}