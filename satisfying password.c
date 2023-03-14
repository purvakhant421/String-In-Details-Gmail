#include <stdio.h>
#include <string.h>
int main() {
        int i,len;
        char password[20];
        
        int digit = 0;
        int letter = 0;
        int special = 0;
        
        printf("Enter password:");
        scanf("%s",password);
        
        len = strlen(password);
        
        if(len>=6){
            
            for(i=0 ; i<len ; i++){
                
                
                if((password[i] >='A' && password[i]<='Z') || (password[i] >='a' && password[i]<='z')){
                    
                    letter = 1;
                    
                }
                else if(password[i] >='0' && password[i]<='9'){
                    
                    digit = 1;
                }
                else{
                    
                    special = 1;
                }
                
                
            }
            
            if((letter && digit && special) == 1){
                
                printf("Valid Password");
            }
            else{
                printf("Not valid password");
                
            }
            
            
            
            
        }
        else{
            
            printf("Less than 6 letters");
        }
    return 0;
}