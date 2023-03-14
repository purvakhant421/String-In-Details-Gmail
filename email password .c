#include <stdio.h> 
#include <string.h>
int main(){	
	char a[20]="xyz12@gmail.com";
	char b[12]="123!p";
	char c[20],d[12];
	 printf("Enter email:"); 
    scanf("%s",c); 
     printf("Enter password:"); 
    scanf("%s",d); 
	int n,z;
	n= strcmp(a,c);
	z= strcmp(b,d);
    if(n==0 && z==0){ 
        printf("Login Success!!");
    }
	else{ 
    	printf("\nUser doesn't exist!!"); 
	} 		
	return 0;
}