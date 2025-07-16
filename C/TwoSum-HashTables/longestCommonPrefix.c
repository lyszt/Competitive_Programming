#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    char* longest_prefix;
    longest_prefix = (char*)malloc(sizeof(char)*201);
    int start_index = 0;
    char previous_char = strs[0][0];
    if (strsSize == 0) {
        longest_prefix[0] = '\0';
        return longest_prefix;
    }
    
    while(1){
        previous_char = strs[0][start_index];
        if(previous_char == '\0'){
            break;
        }
        for(int i = 0; i < strsSize; i++){
            if(start_index >= strlen(strs[i])){
                longest_prefix[start_index] = '\0'; 
                return longest_prefix;
            }
            if(strs[i][start_index] != previous_char || strs[i][start_index] == '\0'){
                longest_prefix[start_index] = '\0'; 
                return longest_prefix;
            } 
        }
        
        longest_prefix[start_index] = previous_char;
        start_index += 1;
        if(previous_char == strsSize - 1){
            break;
        }
    }
    
    longest_prefix[start_index] = '\0'; 
    return longest_prefix;
   
}

int main(){
    char* strs[] = {"dog", "racecar", "car"};
    int count = sizeof(strs) / sizeof(strs[0]);
    printf("%s",longestCommonPrefix(strs,count));
    return 0;
}