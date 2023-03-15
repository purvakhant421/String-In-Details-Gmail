#include <stdio.h>
#include <string.h>
int main(){
    int i,len;
    char password[20];
        
    int digit = 0;
    int letter = 0;
    int specialsymbol = 0;
    printf("Required criteria for password:\n");
    printf("*) Password must be at least of 6 characters\n");
    printf("*) One letter,One digit and One special symbol must be in password\n\n");    

    printf("Now Enter password:");
    scanf("%s",password);   
	printf("");     
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
            specialsymbol = 1;                  
        }   
       }            
      if((letter && digit && specialsymbol) == 1){                
        printf("\n=>Valid Password");
      }
      else{
        printf("\n=>Not valid password");
//		printf("\nenter special char");	
//		printf("\nenter letter");				                
     }
    }
    else{            
        printf("\n=>Less than 6 letters!!");
    }
    return 0;
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
